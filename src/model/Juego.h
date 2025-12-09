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
    tuple<int, int, string> determinarGanador();
    void agregarCartaJugador();
    void agregarCartaCrupier();
    string mostrarManoJugador() const;
    tuple<string, int, string, int> turnoCrupier();
    int ObtenerValorJugador();
    int obtenerValorCrupier();
    void SetJugador(string nombre_jugador, float apuesta_inicial);
    void limpiarManos();
    void BarajarMazo();
    string crupierPrimeraCarta();
    string jugadorPlantarse();
};

#endif // JUEGO_H