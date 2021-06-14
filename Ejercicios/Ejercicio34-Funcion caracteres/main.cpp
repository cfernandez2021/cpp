#include <iostream>
using namespace std;
string nombreCompleto(string nombre,string apellido)
{
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    system("cls");
    string primerNombre="";
    string primerApellido="";

    cout<<"Ingrese primer Nombre: ";
    cin>>primerNombre;
    cout<<"Ingrese primer Apellido: ";
    cin>>primerApellido;

    cout<<endl;
    cout<<"El nombre completo es: "<<nombreCompleto(primerNombre,primerApellido);
    return 0;
}
