#include <iostream>
using namespace std;

int sumar(int a,int b ){
    return a+b;
}
int restar(int a,int b ){
    return a-b;
}
int multiplicar(int a,int b ){
    return a*b;
}
int dividir(int a,int b ){
    if(b==0)
    {
        throw "No se puede dividir entre 0";
    }
    return a/b;
}

int calculadora(int a,int b , char operador){
    

    switch (operador)
    {
    case '+':
        return sumar(a,b);
        break;
    case '-':
        return restar(a,b);
        break;
    case '*':
        return multiplicar(a,b);
        break;
    case '/':
        return dividir(a,b);
        break;
    
    default:
        break;
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
