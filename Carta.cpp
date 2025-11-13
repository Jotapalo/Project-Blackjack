#include "Carta.h"
#include <sstream>

Carta::Carta(int valor, string nombre, string palo) {
    this->valor = valor;
    this->nombre = nombre;
    this->palo = palo;
}

int Carta::obtenerValor() const{
    return valor;
}

string Carta::obtenerNombre() const{
    return nombre;
}

string Carta::obtenerPalo() const{
    return palo;
}

string Carta::toString() const{
    stringstream ss;
    ss << nombre << " de " << palo;
    return ss.str();
}
