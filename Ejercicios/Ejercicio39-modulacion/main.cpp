#include <iostream>
using namespace std;

extern int sumar(int a,int b); //define que se espera recibir una instruccion que esta en otro archivo
int main(int argc, char const *argv[])
{
    system("cls");

    cout<<sumar(5,7);
    cout<<endl;

    

    return 0;
}
