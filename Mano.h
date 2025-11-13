// Mano.h - CRC
// Responsabilidad: Calcular el valor de la mano y verificar Blackjack.
// Colaboración: Usa objetos Carta. Es utilizada por Jugador y Crupier.

#ifndef MANO_H
#define MANO_H

#include <vector>
#include "Carta.h"

class Mano {
private:
    vector<Carta> cartas;   
public:
    void agregarCarta(Carta carta);
    int valorTotal();
    bool tieneBlackjack();
    string mostrarMano() const;
    size_t size() const;
    void limpiarMano();
    vector<Carta> obtenerCartas() const;
};

#endif // MANO_H