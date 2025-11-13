#include "Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador() {
    this->nombre = "";
    this->apuesta = 0.0f;
}

Jugador::Jugador(string nombre, float apuesta) {
    this->nombre = nombre;
    this->apuesta = apuesta;
}

void Jugador::pedirCarta(Mazo& mazo) {
    mano.agregarCarta(mazo.repartirCarta());
}

void Jugador::plantarse() {
    cout << nombre << " se planta con " << mano.valorTotal() << " puntos.\n";
}

int Jugador::calcularValorMano() {
    return mano.valorTotal();
}

void Jugador::mostrarMano() const {
    cout << mano.mostrarMano();
}

float Jugador::obtenerApuesta() {
    return apuesta;
}

void Jugador::limpiarMano() {
    mano.limpiarMano();
}

void Jugador::agregarCarta(Carta carta) {
    mano.agregarCarta(carta);
}
