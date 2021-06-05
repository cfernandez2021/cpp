#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

	while(true)
	{
		system("cls");
		int opcion=0;
		cout<<"*******"<<endl;
		cout<<"MENU"<<endl;
		cout<<"*******"<<endl;
		
		cout<<endl;
		
		cout<<"1- Cafe y Granitas"<<endl;
		cout<<"2- Reposteria"<<endl;
		cout<<"0- Salir"<<endl;
		
		cout<<"Ingrese una opcion del menu: "<<endl;
		cin>>opcion;

		if (opcion==0)
		{
			break;
		}

				switch (opcion)
				{
				case 1:
					{
							system("cls");
							cout<<"Estas en el menu de Cafe y Granitas"<<endl;
							system("pause");
							break;
					}

					case 2:{
							system("cls") ;
							cout<<"Estas en el menu de Reposteria"<<endl;
							system("pause");
							break;
					}
				default:
				{
				cout<<"Ingrese una opcion valida entre 1 y 3"<<endl;
				system("pause");
				break;
				}
						
				}	
			
		
	}
	return 0;
}


