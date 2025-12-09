// ConsoleView.h - CRC
// Responsabilidad: Mostrar al usuario: bienvenida, mensajes, menús, mano del jugador, mano del crupier, resultados;
// pedir datos del usuario (nombre, apuesta, opciones).
// Colaboración: colabora con JuegoController enviando y recibiendo información de E/S.

#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include <iostream>
#include <string>

class ConsoleView {
public:
    ConsoleView();

    void mostrarMensaje(const std::string& mensaje);

    void mostrarBienvenida();

    std::string pedirString(const std::string& msg);
    float pedirFloat(const std::string& msg);
    char pedirChar(const std::string& msg);

    
};
#endif // CONSOLEVIEW_H