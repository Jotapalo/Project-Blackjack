#include "Juego.h"
#include <iostream>
using namespace std;

Juego::Juego() {
    // Constructor - inicializa el juego
}

void Juego::iniciar() {

    cout << "Ingrese el nombre del jugador: ";
    string nombre_jugador;
    getline(cin, nombre_jugador);

    cout << "Ingrese la cantidad a apostar: ";
    float apuesta_inicial;
    cin >> apuesta_inicial;
    cin.ignore(); // Limpiar el buffer de entrada
    
    jugador = Jugador(nombre_jugador, apuesta_inicial);

    jugador.limpiarMano();
    crupier.limpiarMano();
    mazo.barajar();

    jugador.agregarCarta(mazo.repartirCarta());
    jugador.agregarCarta(mazo.repartirCarta());

    crupier.agregarCarta(mazo.repartirCarta());
    crupier.agregarCarta(mazo.repartirCarta());

    cout << "\nTu mano: ";
    jugador.mostrarMano();
    cout << "\n";

    cout << "Crupier muestra: ";
    cout << crupier.obtenerPrimeraCarta() << " [oculta]\n";
}

void Juego::agregarCartaJugador() {
    jugador.agregarCarta(mazo.repartirCarta());
}

void Juego::mostrarManoJugador() const{
    jugador.mostrarMano();
}

int Juego::valorJugador() {
    return jugador.calcularValorMano();
}

void Juego::turnoCrupier() {
    cout << "Mano del crupier: ";
    crupier.mostrarMano();

    crupier.jugarTurno(mazo);

    cout << "Crupier termina con: ";
    crupier.mostrarMano();
}

void Juego::determinarGanador() {
    int valorJ = jugador.calcularValorMano();
    int valorC = crupier.calcularValorMano();

    cout << "Tu total: " << valorJ << endl;
    cout << "Crupier total: " << valorC << endl;

    if (valorJ > 21)
        cout << "Pierdes. Te pasaste de 21.\n";
    else if (valorC > 21)
        cout << "Ganas. El crupier se paso de 21.\n";
    else if (valorJ > valorC)
        cout << "Ganas.\n";
    else if (valorJ < valorC)
        cout << "Pierdes.\n";
    else
        cout << "Empate.\n";
}
