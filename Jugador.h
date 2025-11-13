// Jugador.h - CRC
// Responsabilidad: Representar al jugador, gestionar su mano y decisiones.
// Colaboración: Usa Mano, solicita cartas al Mazo y participa en el Juego.

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Mano.h"
#include "Mazo.h"

class Jugador {
private:
    string nombre;
    Mano mano;
    float apuesta;

public:
    Jugador();
    Jugador(string nombre, float apuesta);
    void pedirCarta(Mazo& mazo);
    void plantarse();
    int calcularValorMano();
    void mostrarMano() const;
    float obtenerApuesta();
    void agregarCarta(Carta carta);
    void limpiarMano();
};

#endif // JUGADOR_H