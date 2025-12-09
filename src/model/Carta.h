// Carta.h - CRC
// Responsabilidad: Representar una carta del mazo con su valor y nombre.
// Colaboración: Utilizada por Mazo y Mano.

#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

using namespace std;

class Carta {
private:
    int valor;
    string nombre; 
    string palo; // tipo de carta: corazones, diamantes, tréboles, picas

public:
    Carta(int valor, string nombre, string palo);
    // getters
    int obtenerValor() const;
    string obtenerNombre() const;
    string obtenerPalo() const;
    string toString() const;
    
    // setters
    void establecerNombre(string nombre);
    void establecerValor(int valor);
    void establecerPalo(string palo);
    
};

#endif // CARTA_H