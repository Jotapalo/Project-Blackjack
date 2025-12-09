// Mazo.h - CRC
// Responsabilidad: Contener conjunto de cartas; mezclarlas; sacar una carta.
// Colaboración: Contiene objetos de tipo Carta. Interactúa con Jugador y Crupier.

#ifndef MAZO_H
#define MAZO_H

#include <vector>
#include "Carta.h"

class Mazo {
private:
    vector<Carta> cartas;

public:
    Mazo();
    void barajar();
    Carta repartirCarta();
    int cartasRestantes();
};

#endif // MAZO_H
