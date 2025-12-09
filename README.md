# Project-Blackjack
Este es un proyecto estudiantil correspondiente a la Universidad del Valle

# Descripcion
Project‑Blackjack es una implementación en C++ de un juego de Blackjack (o 21) donde un jugador compite contra el crupier. El objetivo es acercarse lo más posible a 21 sin pasarse, superando la mano del crupier.
Este proyecto permite practicar programación orientada a objetos, manejo de clases, estructuras de datos y lógica de juego.

# Caracteristicas
- Manejo de cartas mediante clases
- Programacion Orientada a Objetos
- Interfaz simple
- Sistema de turnos
- Control de condiciones para victoria, derrota o empate

# Estructura del proyecto
```bash
/
├── .devcontainer/          # Configuración del entorno de desarrollo
├── .vscode/                # Configuración del editor VS Code
├── Documentos/             # Material complementario del curso
├── Carta.h/.cpp            # Clase Carta
├── Mazo.h/.cpp             # Clase Mazo de cartas
├── Mano.h/.cpp             # Clase Mano
├── Jugador.h/.cpp          # Clase Jugador
├── Crupier.h/.cpp          # Clase Crupier
├── Juego.h/.cpp            # Clase Juego que organiza la ejecucion
├── main.cpp                # Punto de entrada del programa
└── README.md               # Este archivo
```

# Como compilar
1. Debes tener instalado un compilador de C++, en el proyecto se uso g++
2. Desde la carpeta raiz ejecuta:
```bash
  g++ -std=c++17 -o blackjack main.cpp Carta.cpp Mazo.cpp Mano.cpp Jugador.cpp Crupier.cpp Juego.cpp
```
Ejecuta el programa:
```bash
  ./blackjack
```
# Autor
 Juan Pablo Lozano Restrepo - 2521505-2724 Tecnologia en Desarrollo de Software
 
