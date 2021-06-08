#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    for (int i = 0; i <10 ; i++)
    {
     //incremento//
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    for (int i = 9; i >=0 ; i--)
    {
       //decremento//
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<endl;

    for (int i = 0; i <=10 ; i++)
    {
     //roptura de un ciclo for//
        cout<<i<<" ";
        if(i==115)
        {
            break;

        }
    }

        cout<<endl;
        cout<<endl;

 for (int i = 0; i <=10 ; i++)
    {
     //continue en  for//
       
        if(i==5)
        {
            continue;

        }

         cout<<i<<" ";

    }
    

    return 0;
}
