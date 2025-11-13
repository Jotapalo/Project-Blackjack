// Mazo.h - CRC
// Responsabilidad: Administrar la baraja de cartas y proveer cartas al juego.
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
