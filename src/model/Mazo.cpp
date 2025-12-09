#include "Mazo.h"
#include <algorithm>
#include <random>
#include <ctime>

Mazo::Mazo() {
    string palos[4] = {"Corazones", "Picas", "Tréboles", "Diamantes"};
    string nombres[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    for (const string& palo : palos) {
        for (int i = 0; i < 13; i++) {
            int valor = i + 1;
            if (valor > 10) valor = 10;   // J, Q, K valen 10
            if (nombres[i] == "A") valor = 11; // As inicialmente 11
            cartas.push_back(Carta(valor, nombres[i], palo));
        }
    }

    barajar();
}

void Mazo::barajar() {
    srand(static_cast<unsigned int>(time(nullptr)));
    shuffle(cartas.begin(), cartas.end(), default_random_engine(rand()));
}

Carta Mazo::repartirCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}

int Mazo::cartasRestantes() {
    return cartas.size();
}
