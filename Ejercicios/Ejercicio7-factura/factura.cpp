#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    //Entrada//
    double subtotal=0;
    double total=0;
    double impuesto=0;

    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;

    cout<<endl;
    //proceso//
        total=subtotal+(subtotal*0.15);

//Salida//
cout<<"El total a pagar es :"<<total<<endl;


    return 0;
}
