#include <iostream>
using namespace std;

int sumar(int a,int b ){
    return a+b;
}

int calculadora(int a,int b , char operador){
    if (operador== '+'){
        return sumar(a,b);
    }
   
    return -1;
}

int main(int argc, char const *argv[])
{
    system("cls");   
    int num1=0;
    int num2=0;
    char operador;

    cout<<"Digite el valor de a: ";
    cin>>num1;

    cout<<"Digite el valor de b: ";
    cin>>num2;

    cout<<"ingrese el operador (+,-,*,/)";
    cin>>operador;


    cout<<"El resultado de "<<num1<<" "<<operador<<" "<<num2<<" es "<<calculadora(num1,num2,operador);


    return 0;
}
