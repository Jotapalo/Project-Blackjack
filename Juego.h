// Juego.h - CRC
// Responsabilidad: Coordinar el desarrollo del juego y determinar el resultado.
// Colaboración: Usa Mazo, Jugador, Crupier y Mano para gestionar la partida.

#ifndef JUEGO_H
#define JUEGO_H

#include "Mazo.h"
#include "Jugador.h"
#include "Crupier.h"

class Juego {
private:
    Mazo mazo;
    Jugador jugador;
    Crupier crupier;

public:
    Juego();
    void iniciar();
    void determinarGanador();
    void agregarCartaJugador();
    void mostrarManoJugador() const;
    void turnoCrupier();
    int valorJugador();
};

#endif // JUEGO_H