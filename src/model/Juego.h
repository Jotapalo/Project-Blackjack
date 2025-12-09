// Juego.h - CRC
// Responsabilidades: Contener estado del juego: mazo, jugador, crupier; 
// iniciar nueva partida (barajar mazo, repartir cartas iniciales); 
// permitir acciones: pedir carta jugador, turno crupier; 
// determinar ganador o resultado de la ronda; devolver información del estado (manos, puntajes).
// Colaboración: Usa Mazo, Jugador, Crupier, Carta y Mano para gestionar la partida.

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