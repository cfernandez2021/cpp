#include<iostream>
using namespace std;

double subtotal;
string listaProdutos;



void agregarProductos(string descripcion, int cantidad, double precio)
{
    listaProdutos=listaProdutos + descripcion+'\n';
    subtotal=subtotal + (cantidad*precio);

}