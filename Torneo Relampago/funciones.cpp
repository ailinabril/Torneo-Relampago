#ifndef FUNCIONES_CPP_INCLUDED
#define FUNCIONES_CPP_INCLUDED
#include "funciones.h"

#include <iostream>
using namespace std;

void jugarPartido (int jugadores[][4]){

    int numeroJ1;
    int numeroJ2;
    int puntajeJ1;
    int puntajeJ2;

    cout<< "Jugador 1 elige un numero del 1 al 4: ";
    cin>> numeroJ1;

    cout<< "Jugador 2 elige un numero del 1 al 4: ";
    cin>> numeroJ2;

    while (numeroJ1 == numeroJ2 || numeroJ1 < 1 || numeroJ1 > 4 || numeroJ2 < 1 || numeroJ2 > 4){
        cout<< "Jugador invalido, vuelvan a elegir: "<<endl;
        cout<< "JUGADOR 1: ";
        cin>> numeroJ1;
        cout<< "JUGADOR 2: ";
        cin>> numeroJ2;
    }

    //preguntamos el puntaje y cargamos los puntos en la matris
    cout<< "Ingresa el puntaje del jugador 1: ";
    cin>> puntajeJ1;

    cout<< "Ingresa el puntaje del jugador 2: ";
    cin>> puntajeJ2;

    jugadores[numeroJ1-1][numeroJ2-1] = puntajeJ1;
    jugadores[numeroJ2-1][numeroJ1-1] = puntajeJ2;
}

void mostrarTabla (int jugadores[][4]){

    cout<< "TABLA DE JUGADORES: "<<endl;
    cout<< "JUGADOR 1 --- JUGADOR 2 --- JUGADOR 3 --- JUGADOR 4 "<<endl;

    for (int i = 0; i < 4; i++){
        cout<< "J"<< (i + 1)<< " ";

        for (int j = 0; j < 4; j ++){
           if (i == j){
           cout<< " -";
           }
           else {
              cout<< " " << jugadores[i][j];
           }
        }
        cout<<endl;
    }
    system("pause");
}

void reiniciarCampeonato (int jugadores[][4]){
    for (int i = 0; i < 4; i++){

        for (int j = 0; j <4; j++){

        //inicializamos cada casilla en 0
        jugadores[i][j] = 0;
        }
    }
    cout << "Campeonato reiniciado correctamente." << endl;
    system("pause");
}

int menuJuego (){

    int opcion;
    system("cls");

    cout<< "GRACIAS POR UTILIZAR NUESTRO JUEGO :)"<<endl;

    cout<<endl;

    cout<< "1. Cargar puntos. "<<endl;

    cout<< "2. Mostrar tabla. "<<endl;

    cout<< "3. Reiniciar campeonato. "<<endl;

    cout<< "0. Salir."<<endl;

    cout<< "Seleccione una opcion: ";
    cin>> opcion;

    return opcion;
}


#endif // FUNCIONES_CPP_INCLUDED
