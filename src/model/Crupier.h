// Crupier.h - CRC
// Responsabilidad: Representar la mano del crupier; recibir cartas; reglas de turno del crupier; mano propia.
// Colaboración: Usa Mano, solicita cartas al Mazo y colabora con el Juego.

#ifndef CRUPIER_H
#define CRUPIER_H

#include "Mano.h"
#include "Mazo.h"

class Crupier {
private:
    Mano mano;

public:
    Crupier();
    void jugarTurno(Mazo& mazo);
    int calcularValorMano();
    void agregarCarta(Carta carta);
    string obtenerPrimeraCarta() const;
    void limpiarMano();
    string mostrarMano();
    void ObtenerMano();
};

#endif // CRUPIER_H