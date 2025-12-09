// Jugador.h - CRC
// Responsabilidad: Representar al jugador, nombre, apuesta, mano; recibir cartas; obtener puntaje de su mano; entregar su mano.
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
    string plantarse();
    int calcularValorMano();
    string obtenerMano() const;
    float obtenerApuesta();
    void agregarCarta(Carta carta);
    void limpiarMano();
};

#endif // JUGADOR_H