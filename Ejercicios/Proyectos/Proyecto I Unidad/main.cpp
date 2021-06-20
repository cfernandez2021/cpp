#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;
int main(int argc, char const *argv[])
{
 
     while(true)
	{
		system("cls");
		int opcion=0;

        cout<<"***************"<<endl;
        cout<<"MENU DE JUEGOS"<<endl;                   //Visualización del titulo del Menu//
        cout<<"***************"<<endl<<endl;

        cout<<"Seleccione un juego"<<endl;
        cout<<"1- StarShip"<<endl;
        cout<<"2- Snake"<<endl;                         //Opciones disponibles del Menu//
        cout<<"3- Salir"<<endl<<endl;

		cout<<"Ingrese un numero del menu para seleccionar un juego "<<endl; 
		cin>>opcion;                         //Espacio para digitar la opcion deseada por el usuario//

        //Si la opcion es igual a 3 se saldra del ciclo while y cerrara el programa//
		if (opcion==3)
		{                       
			break;
		}
                     //Estructura switch con las opciones disponibles que podra digitar el usuario//
				switch (opcion)
				{
				case 1:
					{
                        system("cls");          //Este comando limpia la consola//
						starShip();         //Cuando el usuario digite uno selecciona el juego StarShip//
							break;         //se interrumpe el ciclo while//
					}

					case 2:{
                            system("cls");  //Este comando limpia la consola//
							snake();        //Cuando el usuario digite dos selecciona el juego Snake//
							break;           //se interrumpe el ciclo while//
					}
				default:           // Si la opcion no esta entre el listado entonces se hará lo siguiente//
				{
				cout<<"Ingrese una opcion valida entre 1 y 3"<<endl; //se le pedirá al usuario digitar un número valido de la opción//
				system("pause");    //detendrá el programa para esperar la siguiente opción//
				break;      //se interrumpe el ciclo while//
				} //fin del default//
						
				}	//fin de la estructura swhitch
			
		
	}//fin del ciclo while
    
    return 0;
} //fin del main//
