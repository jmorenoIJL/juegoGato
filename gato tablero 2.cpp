#include <iostream>
#include <stdlib.h>

using namespace std;

#define FILAS 3
#define COLUMNAS 3

void llenartablero(string tablero[FILAS][COLUMNAS], int filas, int columnas) {
    cout << endl;
    cout << "\n";
    cout << "El tablero es: " << endl;
    for (int i = 0; i < filas; ++i) {
        cout << endl;
        for (int j = 0; j < columnas; ++j) {
            tablero[i][j] = " [  ] " ;
            
            cout << tablero [i][j];
        }
        cout << endl;
        
        
    }
}

void MostrarTablero (string tablero [FILAS][COLUMNAS], int filas, int columnas){
    cout << "el tablero es: " << "\n";
    for (int i=0; i<filas; i++){
        cout << endl;
        for (int j=0; j<columnas; j++) {
            cout << tablero [i][j];
        }
        cout << endl;
    }
    
}


void Comprobar ( string tablero [FILAS] [COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (tablero [i] [j] == " [  ] "){
                cout << "\n";
                cout << "la opcion " << tablero [i] [j] << "esta dispobible" << endl;
            }
        }
        cout << endl;
    }
}

int main()
{
    cout << "Este es un juego de gato con 2 jugadores.\nJugador 1 ------> X\nJugador 2 ------> O.\n";
    
    string tablero[3][3];
    llenartablero(tablero, FILAS, COLUMNAS);
    cout << endl;
    tablero [2][2] =" [ x ]";
    tablero [0][0] =" [ x ]";
    tablero [1][1]= " [ O ]";
    
    cout << endl;
    cout << endl;
    MostrarTablero(tablero, FILAS,COLUMNAS);
    cout << endl;
    cout << endl;
    
    Comprobar(tablero, FILAS, COLUMNAS);

    
}
