#include <iostream>
#include <stdlib.h>

using namespace std;

#define FILAS 3
#define COLUMNAS 3

void mostrartablero(string tablero[FILAS][COLUMNAS], int filas, int columnas) {
    cout << "El tablero es: " << endl;
    for (int i = 0; i < filas; ++i) {
        cout << endl;
        for (int j = 0; j < columnas; ++j) {
            tablero[i][j] = "  |  " ;
            cout << "-----------";
            cout << tablero [i][j];
        }
        cout << endl;
    }
}
int main()
{
    cout << "Este es un juego de gato con 2 jugadores.\nJugador 1 ------> X\nJugador 2 ------> O.\n";
    
    string tablero[3][3];
    mostrartablero(tablero, FILAS, COLUMNAS);

    
}
