#include<iostream>
using namespace std;
extern void agregarProductos(string descripcion, int cantidad, double precio);
void productos(int opcion)
{
    
    system("cls");
    
    int opcionproducto;
    switch (opcion)
    {
    case 1:
            {
                cout<<"BEBIDAS CALIENTES"<<endl;
                cout<<"******************"<<endl;
                cout<<"1-Capuccino"<<endl;
                cout<<"2-Expresso"<<endl;
                cin>>opcionproducto;

                switch (opcionproducto)
                {
                case 1:
                    agregarProductos("Capuccino",1,40);
                    break;
                
                case 2:
                    agregarProductos("Expresso",1,30);
                    break;

                default:{
                cout<<"Opcion no valida";
                return ; 
                    break;
                }

                }
                cout<<endl;
                cout<<"Producto agregado"<<endl<<endl;
                system("pause");                
            }
        break;

    case 2:
            {
                cout<<"BEBIDAS FRIAS"<<endl;
                cout<<"******************"<<endl;
                system("pause");
                    }

    case 3:
            {
                cout<<"REPOSTERIA"<<endl;
                cout<<"***********"<<endl;
                system("pause");
        }
    
    
    default:
        break;
    }
}

