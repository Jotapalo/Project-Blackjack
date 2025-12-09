#include "juegoController.h"
#include <iostream>
#include <limits>
#include "../model/Juego.h"
#include <tuple>

JuegoController::JuegoController() {
    this->view = ConsoleView();
    this->modelo = Juego();
}

void JuegoController::iniciarJuego() {

    view.mostrarBienvenida();
    view.mostrarMensaje("\n");

    string nombre_jugador = view.pedirString("Ingrese el nombre del jugador: ");
    float apuesta_inicial = view.pedirFloat("Ingrese la cantidad a apostar: ");

    modelo.SetJugador(nombre_jugador, apuesta_inicial);

    modelo.limpiarManos();
    modelo.BarajarMazo();

    modelo.agregarCartaJugador();
    modelo.agregarCartaJugador();
    modelo.agregarCartaCrupier();
    modelo.agregarCartaCrupier();

    view.mostrarMensaje("\nTu mano: ");
    view.mostrarMensaje(modelo.mostrarManoJugador());

    view.mostrarMensaje("\nCrupier muestra: ");
    view.mostrarMensaje(modelo.crupierPrimeraCarta() + " [oculta]\n");
}

void JuegoController::turnoCrupier() {
    view.mostrarMensaje("\nTurno del crupier...\n");
    auto [mano_anterior, valorMano_anterior, mano_nueva, valorMano_nueva] = modelo.turnoCrupier();
    view.mostrarMensaje("Mano del crupier: " + mano_anterior + " (Valor: " + to_string(valorMano_anterior) + ")");
    view.mostrarMensaje("Crupier termina con: " + mano_nueva + " (Valor: " + to_string(valorMano_nueva) + ")");
}

void JuegoController::programa() {
    
    char opcion;

    do {
        iniciarJuego();

        bool turnoJugador = true;

        // --- Turno del jugador ---
        while (turnoJugador) {

            opcion = view.pedirChar("\n¿Deseas pedir otra carta (c) o plantarte (p)? ");

            if (opcion == 'c' || opcion == 'C') {
                modelo.agregarCartaJugador();
                view.mostrarMensaje("Tu mano: ");
                view.mostrarMensaje(modelo.mostrarManoJugador());
                view.mostrarMensaje("\n");

                if (modelo.ObtenerValorJugador() > 21) {
                    view.mostrarMensaje("Te pasaste de 21. ¡Pierdes!\n");
                    turnoJugador = false;
                }

            } else if (opcion == 'p' || opcion == 'P') {
                turnoJugador = false;
            } else {
                view.mostrarMensaje("Opcion invalida, intenta de nuevo.\n");
            }
        }

        view.mostrarMensaje(modelo.jugadorPlantarse());

        // --- Turno del crupier y resultado ---
        if (modelo.ObtenerValorJugador() <= 21) {
            turnoCrupier();
        }

        auto [vj, vc, msg] = modelo.determinarGanador();

        view.mostrarMensaje("Jugador: " + to_string(vj));
        view.mostrarMensaje("Crupier: " + to_string(vc));

        view.mostrarMensaje("\n=== Resultado final ===\n");
        
        if (vj > 21)
            view.mostrarMensaje("¡Te pasaste! El crupier gana.\n");
        else if (vc > 21)
            view.mostrarMensaje("¡El crupier se paso! ¡Tu ganas!\n");
        else if (msg == "JugadorGana")
            view.mostrarMensaje("¡Ganaste!\n");
        else if (msg == "CrupierGana")
            view.mostrarMensaje("El crupier gana.\n");
        else
            view.mostrarMensaje("Empate.\n");

        opcion = view.pedirChar("\n¿Deseas jugar otra partida? (s/n): ");

    } while (opcion == 's' || opcion == 'S');

    view.mostrarMensaje("\nGracias por jugar Blackjack de JP. ¡Hasta pronto!\n");
}
