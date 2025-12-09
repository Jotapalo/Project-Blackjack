#include "Crupier.h"
#include <iostream>
using namespace std;

Crupier::Crupier() {}

void Crupier::jugarTurno(Mazo& mazo) {
    while (mano.valorTotal() < 17) {
        mano.agregarCarta(mazo.repartirCarta());
    }
}

int Crupier::calcularValorMano() {
    return mano.valorTotal();
}

string Crupier::obtenerPrimeraCarta() const {
    return mano.size() > 0 ? mano.obtenerCartas()[0].toString() : "";
}

// void Crupier::mostrarMano(bool mostrarPrimeraCarta) {
//     if (!mostrarPrimeraCarta && mano.size() > 0) {
//         std::cout << "[Carta Oculta]" << std::endl;
//         for (size_t i = 1; i < mano.size(); ++i) {
//             mano.obtenerCartas()[i].toString();
//         }
//     } else {
//         for (const auto& carta : mano.obtenerCartas()) {
//             carta.toString();
//         }
//         std::cout << "Valor total: " << calcularValorMano() << std::endl;
//     }

//     std::cout << std::endl;
// }

string Crupier::mostrarMano() {
    return mano.mostrarMano();
}


void Crupier::limpiarMano() {
    mano.limpiarMano();
}

void Crupier::agregarCarta(Carta carta) {
    mano.agregarCarta(carta);
}