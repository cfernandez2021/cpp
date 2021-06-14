#include <iostream>
using namespace std;

int sumar(int a,int b ){
    return a+b;
}

int calculadora(int a,int b , char operador){
    if (operador== '+'){
        return sumar(a,b);
    }
   
    throw "El operador no existe";
}

int main(int argc, char const *argv[])
{
    system("cls");   
    int num1=0;
    int num2=0;
    char operador;
    int resultado=0;

    cout<<"Digite el valor de a: ";
    cin>>num1;

    cout<<"Digite el valor de b: ";
    cin>>num2;

    cout<<"ingrese el operador (+,-,*,/)";
    cin>>operador;


    try
    {
          resultado=calculadora(num1,num2,operador);
          cout<<"El resultado de "<<num1<<" "<<operador<<" "<<num2<<" es "<<resultado;
    }
    catch(const char*& error)
    {
        cout<< error;
    }
    return 0;
}
