
#include <iostream>
#include <iostream>
using namespace std;

// Función para imprimir el tablero
void mostrartablero(string tablero[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para verificar si hay ganador
string comprobarganador(string tablero[3][3]) {
    // Verificar filas
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] != "[ ]" && tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]) {
            return tablero[i][0];
        }
    }
    // Verificar columnas
    for (int i = 0; i < 3; i++) {
        if (tablero[0][i] != "[ ]" && tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i]) {
            return tablero[0][i];
        }
    }
    // Verificar diagonales
    if (tablero[0][0] != "[ ]" && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
        return tablero[0][0];
    }
    if (tablero[0][2] != "[ ]" && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
        return tablero[0][2];
    }
    // No hay ganador
    return "[ ]";
}

int main() {
    string tablero[3][3] = {
        {"[ ]", "[ ]", "[ ]"},
        {"[ ]", "[ ]", "[ ]"},
        {"[ ]", "[ ]", "[ ]"}
    };
    string jugador = "[X]";
    string ganador = "[ ]";
    int fila, columna;

    // Imprimir tablero inicial
    mostrartablero(tablero);
    cout << "\n";

    // Loop del juego
    while (ganador == "[ ]") {
        // Pedir al jugador actual que haga su jugada
        cout << "Jugador " << jugador << ", es tu turno. Ingresa la filal donde deseas tirar, las filas inician desde el 0 y termina en el 2: ";
        cin >> fila;
        cout << "Ingresa la columna donde deseas tirar, las columnas inican desde el 0 y terminan en el 2: ";
        cin >> columna;
        cout << endl;

        // Verificar si la casilla está disponible
        if (tablero[fila][columna] != "[ ]") {
            cout << "La casilla ya está ocupada. Intenta de nuevo." << endl;
            continue;
        }

        // Hacer la jugada
        tablero[fila][columna] = jugador;
        mostrartablero(tablero);

        // Verificar si hay ganador
        ganador = comprobarganador(tablero);
        if (ganador != "[ ]") {
            break;
        }

        // Cambiar de jugador
        if (jugador == "[X]") {
            jugador = "[O]";
        } else {
            jugador = "[X]";
        }
    }

    // Imprimir el resultado
    if (ganador == "[x]" || ganador == "[O]") {
        cout << "FELICIDADES GANASTE";}
}
