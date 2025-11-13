#include <iostream>
#include <limits>
#include "Juego.h"
using namespace std;

int main() {
    Juego juego;
    char opcion;

    cout << "==============================\n";
    cout << "          BLACKJACK           \n";
    cout << "==============================\n";

    do {
        juego.iniciar();

        bool turnoJugador = true;

        // --- Turno del jugador ---
        while (turnoJugador) {
            cout << "\n¿Deseas pedir otra carta (p) o plantarte (s)? ";
            cin >> opcion;

            if (opcion == 'p' || opcion == 'P') {
                juego.agregarCartaJugador();
                cout << "Tu mano: ";
                juego.mostrarManoJugador();
                cout << "\n";

                if (juego.valorJugador() > 21) {
                    cout << "Te pasaste de 21. ¡Pierdes!\n";
                    turnoJugador = false;
                    break;
                }
            } else if (opcion == 's' || opcion == 'S') {
                turnoJugador = false;
            } else {
                cout << "Opcion invalida, intenta de nuevo.\n";
            }
        }

        // --- Turno del crupier ---
        if (juego.valorJugador() <= 21) {
            cout << "\nTurno del crupier...\n";
            juego.turnoCrupier();
            cout << "\n";
        }

        // --- Determinar ganador ---
        cout << "\n=== Resultado final ===\n";
        juego.determinarGanador();

        cout << "\n¿Deseas jugar otra partida? (s/n): ";
        cin >> opcion;

        // Limpia buffer de entrada (por seguridad)
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (opcion == 's' || opcion == 'S');

    cout << "\nGracias por jugar Blackjack. ¡Hasta pronto!\n";
    return 0;
}
