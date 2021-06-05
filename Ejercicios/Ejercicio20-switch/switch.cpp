#include <iostream >
using namespace std;
int main(int argc, char const *argv[])
{
    int opcion;

    cout<<"Escoja una opcion entre 1 y 3:"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case  1:
        cout<<"Escogiste 1"<<endl;
        break;
                 case  2:
        cout<<"Escogiste 2"<<endl;
        break;    

                     case  3:
        cout<<"Escogiste 3"<<endl;
        break;
    default:
    cout<<"La opcion escogida esta fuera del rango solicitado!"<<endl;

        break;
    }
    return 0;
}
