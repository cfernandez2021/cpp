#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    //Entrada//
    double subtotal=0;
    double total=0;
    double impuesto=0;
	int descuento=0;
	double calculoDescuento=0;
	double calculoImpuesto=0;
	
	
	
    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;
    
    cout<<"Ingrese el descuento: (0,10,15 o 20)";
    cin>>descuento; 
    
    

    cout<<endl;
    //proceso//
    
    calculoDescuento=(subtotal*descuento)/100;
	calculoImpuesto=(subtotal-calculoDescuento)*0.15;
	    total=(subtotal-calculoDescuento)+calculoImpuesto;

//Salida//
cout<<"El total a pagar es :"<<total<<endl;


    return 0;
    
}

