#include "Mano.h"

void Mano::agregarCarta(Carta carta) {
    cartas.push_back(carta);
}

int Mano::valorTotal() {
    int total = 0;
    int ases = 0;

    for (const Carta& carta : cartas) {
        total += carta.obtenerValor();
        if (carta.obtenerNombre() == "A") ases++;
    }

    // Ajustar el valor de los Ases si el total supera 21
    while (total > 21 && ases > 0) {
        total -= 10; // Un As pasa de valer 11 a valer 1
        ases--;
    }

    return total;
}

bool Mano::tieneBlackjack() {
    return (cartas.size() == 2 && valorTotal() == 21);
}

string Mano::mostrarMano() const {
    string salida;
    for (const Carta& c : cartas) {
        salida += c.toString() + " | ";
    }
    return salida.substr(0, salida.length() - 3); // Elimina el último " | "
}

size_t Mano::size() const { 
    return cartas.size(); 
}

void Mano::limpiarMano() {
    cartas.clear();
}

vector<Carta> Mano::obtenerCartas() const {
    return cartas;
}