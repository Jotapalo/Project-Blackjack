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
  
```bash
/ (raíz del repo)
│
├── .devcontainer/        # Entorno de desarrollo (opcional)
├── .vscode/              # Configuración del editor (opcional)
└── src/                  # Código fuente
     ├── model/           # Clases del modelo (lógica del juego)
     │    ├── Carta.h / Carta.cpp
     │    ├── Mazo.h / Mazo.cpp
     │    ├── Mano.h / Mano.cpp
     │    ├── Jugador.h / Jugador.cpp
     │    ├── Crupier.h / Crupier.cpp
     │    └── Juego.h / Juego.cpp
     │
     ├── view/            # Clases de vista / interfaz (consola)
     │    ├── ConsoleView.h / ConsoleView.cpp
     │
     ├── controller/      # Controlador central que coordina todo
     │    ├── JuegoController.h / JuegoController.cpp
     │
     └── main.cpp         # Punto de entrada: inicia el controlador
```

## Cómo compilar

Desde la raíz del proyecto, ejecuta:

```bash
g++ -std=c++17 -I./src -Wall -o blackjack \
    src/model/*.cpp \
    src/view/*.cpp \
    src/controller/*.cpp \
    src/main.cpp
```

Luego, para ejecutar:

```bash
./blackjack
```

## Pruebas Unitarias usando google test

Para las pruebas ya existe un ./test_model.

El siguiente comando ejecuta la prueba unitaria:

```bash
g++ -std=c++17 -I./src -I/usr/include/gtest -pthread \
    test/test_model.cpp \
    src/model/*.cpp \
    -lgtest -lgtest_main -o test_model
./test_model
```
# Autor
 Juan Pablo Lozano Restrepo - 2521505-2724 Tecnologia en Desarrollo de Software
 


