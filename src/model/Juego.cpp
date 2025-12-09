#include "Juego.h"
#include <iostream>
#include <tuple>
using namespace std;

Juego::Juego() {
    // Constructor - inicializa el juego
}

void Juego::iniciar() {

    // cout << "Ingrese el nombre del jugador: ";
    // string nombre_jugador;
    // getline(cin, nombre_jugador);

    // cout << "Ingrese la cantidad a apostar: ";
    // float apuesta_inicial;
    // cin >> apuesta_inicial;
    // cin.ignore(); 
    
    // jugador = Jugador(nombre_jugador, apuesta_inicial);

    // jugador.limpiarMano();
    // crupier.limpiarMano();
    // mazo.barajar();

    // jugador.agregarCarta(mazo.repartirCarta());
    // jugador.agregarCarta(mazo.repartirCarta());

    // crupier.agregarCarta(mazo.repartirCarta());
    // crupier.agregarCarta(mazo.repartirCarta());

    // cout << "\nTu mano: ";
    // jugador.mostrarMano();
    // cout << "\n";

    // cout << "Crupier muestra: ";
    // cout << crupier.obtenerPrimeraCarta() << " [oculta]\n";

    //Funcion migrada a JuegoController.cpp
}


string Juego::crupierPrimeraCarta() {
    return crupier.obtenerPrimeraCarta();
}

void Juego::limpiarManos() {
    jugador.limpiarMano();
    crupier.limpiarMano();
}

void Juego::BarajarMazo() {
    mazo.barajar();
}

void Juego::agregarCartaJugador() {
    jugador.agregarCarta(mazo.repartirCarta());
}

void Juego::agregarCartaCrupier() {
    crupier.agregarCarta(mazo.repartirCarta());
}
void Juego::SetJugador(string nombre_jugador, float apuesta_inicial) {
    jugador = Jugador(nombre_jugador, apuesta_inicial);
}

string Juego::mostrarManoJugador() const{
    return jugador.obtenerMano();
}

int Juego::ObtenerValorJugador() {
    return jugador.calcularValorMano();
}

int Juego::obtenerValorCrupier() {
    return crupier.calcularValorMano();
}

tuple<string, int, string, int> Juego::turnoCrupier() {
    // cout << "Mano del crupier: ";
    string mano_anterior = crupier.mostrarMano();
    int valorMano_anterior = crupier.calcularValorMano();

    crupier.jugarTurno(mazo);

    // cout << "Crupier termina con: ";
    string mano_nueva = crupier.mostrarMano();
    int valorMano_nueva = crupier.calcularValorMano();

    return make_tuple(mano_anterior, valorMano_anterior, mano_nueva, valorMano_nueva);
}

tuple<int, int, string> Juego::determinarGanador() {
    int valorJ = jugador.calcularValorMano();
    int valorC = crupier.calcularValorMano();
    string r;
    
    if (valorJ > 21)
        r = "CrupierGana_JugadorSePaso";
    else if (valorC > 21)
        r = "JugadorGana_CrupierSePaso";
    else if (valorJ > valorC)
        r = "JugadorGana";
    else if (valorJ < valorC)
        r = "CrupierGana";
    else
        r = "Empate";
    
    return make_tuple(valorJ, valorC, r);
}

string Juego::jugadorPlantarse() {
    return jugador.plantarse();
}
