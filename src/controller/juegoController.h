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