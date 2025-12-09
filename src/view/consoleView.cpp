#include <iostream>
#include <limits>
#include "../view/consoleView.h"
using namespace std;

ConsoleView::ConsoleView() {}

void ConsoleView::mostrarBienvenida() {
    cout << "==============================\n";
    cout << "          BLACKJACK           \n";
    cout << "==============================\n";
}

void ConsoleView::mostrarMensaje(const std::string& mensaje) {
        std::cout << mensaje << std::endl;
    }

std::string ConsoleView::pedirString(const std::string& msg) {
    std::string input;
    std::cout << msg;
    std::getline(std::cin, input);
    return input;
}
float ConsoleView::pedirFloat(const std::string& msg) {
    float input;
    std::cout << msg;
    while (!(std::cin >> input)) {
        std::cout << "Entrada inválida. Por favor, ingrese un número válido: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer
    return input;
}
char ConsoleView::pedirChar(const std::string& msg) {
    char input;
    std::cout << msg;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer
    return input;
}
