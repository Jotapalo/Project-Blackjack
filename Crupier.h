// Crupier.h - CRC
// Responsabilidad: Representar al crupier y ejecutar su turno automáticamente.
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
    void mostrarMano(bool mostrarPrimeraCarta = true);
};

#endif // CRUPIER_H