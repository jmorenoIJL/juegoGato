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
            if (tablero [i] [j] != " [  ] "){
                cout << "\n";
                cout << "las coordenadas no estan disponibles" << endl;
                
            }
        }
        cout << endl;
    }
}

void jugador1 ( string tablero [FILAS] [COLUMNAS] , int filas, int columnas ){
    cout << "es el turno del jugador 1" << endl;
    cout << "selecciona una fila para tirar" << endl;
    cout << "las filas y columnas inician desde el número 0" << "\n";
    cin >> filas;
    cout << "selecciona una columna para tirar" << endl;
    cin >> columnas;
    tablero [filas] [columnas]= "[ x ]";
   
    
}
void jugador2( string tablero [FILAS] [COLUMNAS] , int filas, int columnas ){
    cout << "es el turno del jugador 2" << endl;
    cout << "selecciona una fila para tirar" << endl;
    cin >> filas;
    cout << "selecciona una columna para tirar" << endl;
    cin >> columnas;
    tablero [filas] [columnas]= "[ O ]";
    }
   
    
void comprobarganador(string tablero [FILAS][COLUMNAS], int filas, int columnas){
    int ganador = 0;
   if (   tablero[0][0] == "[ x ]" || tablero[0][0] == tablero[0][1] ||tablero [0][0] == tablero[0][2]
       ||tablero[1][0] ==  "[ x ]" || tablero[1][0] == tablero[1][1] || tablero[1][0] == tablero[1][2]
       || tablero[2][0] == "[ x ]" || tablero[2][0] == tablero[2][1] || tablero[2][0] == tablero[2][2]
       
       
       || tablero[0][0] == "[ x ]" || tablero[0][0]  == tablero[1][0] || tablero[0][0] == tablero[2][0]
       || tablero[0][1] == "[ x ]" || tablero [0][1] == tablero[1][1] ||tablero[0][1]  == tablero[2][1]
       || tablero[0][2] == "[ x ]" || tablero[0][2]  == tablero[1][2] || tablero[0][2] == tablero[2][2]
       
       || tablero[0][0] == "[ x ]" ||tablero[0][0]  == tablero[1][1] || tablero[0][0] == tablero[2][2]
       || tablero[0][2] == "[ x ]" ||tablero[0][2]  == tablero[1][1] || tablero[0][2] == tablero[2][0]){
        
        cout << "FELICIDADES, GANO EL JUGADOR 1";
       
        
    }

 else if( tablero[0][0] == "[ O ]" || tablero [0][0] == tablero[0][1] || tablero[0][0] == tablero[0][2]
       || tablero[1][0] == "[ O ]" || tablero[1][0]  == tablero[1][1] || tablero[1][0] == tablero[1][2]
       || tablero[2][0] == "[ O ]" || tablero[2][0]  == tablero[2][1] || tablero[2][0] == tablero[2][2]
   
   
   || tablero[0][0] == "[ O ]"|| tablero[0][0] == tablero[1][0] || tablero[0][0] == tablero[2][0]
   || tablero[0][1] == "[ O ]"|| tablero [0][1] == tablero[1][1]  ||tablero[0][1] == tablero[2][1]
   || tablero[0][2] == "[ O ]"|| tablero[0][2] == tablero[1][2] || tablero[0][2] == tablero[2][2]
   
   || tablero[0][0] == "[ O ]" ||tablero[0][0] == tablero[1][1] || tablero[0][0] == tablero[2][2]
   || tablero[0][2] == "[ O ]" || tablero[0][2] == tablero[1][1]|| tablero[0][2] == tablero[2][0]){
    
    cout << "FELICIDADES, GANO EL JUGADOR 2" << endl;
     
     
 }
    ganador =+1;

}
    

int main()
{
    string j1;
    int ganador =0;
    cout << "Este es un juego de gato con 2 jugadores.\nJugador 1 ------> X\nJugador 2 ------> O.\n";
    
    string tablero[3][3];
    llenartablero(tablero, FILAS, COLUMNAS);
    cout << endl;
    do {
        jugador1(tablero, FILAS, COLUMNAS);
        cout << endl;
        cout << endl;
        MostrarTablero(tablero, FILAS,COLUMNAS);
        cout << endl;
        cout << endl;
        jugador2(tablero, FILAS, COLUMNAS);
        cout << endl;
        cout << endl;
        MostrarTablero(tablero, FILAS,COLUMNAS);
        cout << endl;
        cout << endl;
        comprobarganador(tablero,FILAS,COLUMNAS);
        cout << endl;
        
        cout << endl;}
    while (ganador != 1);
    
    return 0;
}
