#include<iostream>
using namespace std;

double subtotal;
string listaProdutos;



void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProdutos=listaProdutos + descripcion+'\n';
    subtotal=subtotal + (cantidad*precio);

}

void imprimirFactura()
{
    system("cls");
    cout<<"*********"<<endl;
    cout<<"Factura"<<endl;
    cout<<"*********"<<endl;
    cout<<endl;


    cout<<"lista de productos"<<endl;
    cout<<listaProdutos;
    cout<<endl;

    cout<<"subtotal : "<<subtotal;
    cout<<endl;
    cout<<endl;
    system("pause"); 


}