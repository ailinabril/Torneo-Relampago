#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
   int jugadores[4][4] = {};
   int opcion;

    //menu
    do {
            opcion = menuJuego();

            if (opcion == 1){
                system("cls");
                jugarPartido(jugadores);
            }

            if (opcion == 2){
                system("cls");
                mostrarTabla(jugadores);
            }

            if (opcion == 3){
                system("cls");
                reiniciarCampeonato(jugadores);
            }

            if (opcion == 0){
                cout<< "Gracias por elegirnos :)";
            }




    }while (opcion != 0);
    return 0;
}
