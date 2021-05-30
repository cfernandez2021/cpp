#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=0,b=0,suma=0,resta=0,multiplicacion=0,division=0;

    cout<<"Ingrese el valor de A: ";
    cin>>a;
    cout<<"Ingrese el valor de B: ";
    cin>>b;

    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;

    cout<<"La suma de a + b es: "<<suma<<endl;
    cout<<"La resta de a - b es: "<<resta<<endl;
    cout<<"La multiplicacion de a * b es: "<<multiplicacion<<endl;
    cout<<"La division de a / b es: "<<division<<endl;
    

    return 0;
}
