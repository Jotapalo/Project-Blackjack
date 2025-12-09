// JuegoController.h - CRC
// Responsabilidad: Coordinar el flujo del juego: iniciar juego, leer inputs vía Vista,
// invocar métodos del Modelo, decidir cuándo llamar a la Vista, controlar bucles de juego (turnos, partidas).
// Colaboración: colabora con Juego(Modelo) y ConsoleView(Vista).

#ifndef JUEGOCONTROLLER_H
#define JUEGOCONTROLLER_H

#include "../model/Juego.h"
#include "../view/consoleView.h"
#include "../view/consoleView.h"

class JuegoController {
private:
    ConsoleView view;
    Juego modelo;
    ConsoleView vista;
public: 
    JuegoController();
    void iniciarJuego();
    void programa();
    void turnoCrupier();
};

#endif // JUEGOCONTROLLER_H