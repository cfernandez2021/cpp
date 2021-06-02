#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int nota;


    cout<<"Digite la nota obtenida : ";
    cin>>nota;



if (nota>=96 && nota<=100)
{
    cout<<"obtuviste una A++";
}
    else if(nota>=91 && nota<=95)
    {
                cout<<"obtuviste una A+";
    }
        else if(nota>=86 && nota<=90)
        {
            cout<<"obtuviste una A";
        } 
            else if(nota>=85 && nota<=89)
            {
                    cout<<"obtuviste una A-";
            }
                else if(nota>=76 && nota<=80)
                {
                            cout<<"obtuviste una B+";
                }
                    else if(nota>=71 && nota<=75)
                    {
                                cout<<"obtuviste una B";
                    }
                        else if(nota>=66 && nota<=70)
                        {
                                    cout<<"obtuviste una B-";
                        }
                                else if(nota>=61 && nota<=65)
                        {
                                    cout<<"obtuviste una C+";
                        }   
                                    else if(nota>=56 && nota<=60)
                        {
                                        cout<<"obtuviste una C";
                        }
                                        else if(nota>=51 && nota<=55)
                        {
                                                cout<<"obtuviste una C-";
                        }
                                            else if(nota>=46 && nota<=50)
                        {
                                                cout<<"obtuviste una D+ ";
                        }
                                                else if(nota>=41 && nota<=50)
                        {
                                                cout<<"obtuviste una D";
                        }
                                                        else if(nota>=36 && nota<=40)
                        {
                                                        cout<<"obtuviste una D-";
                        }
                                                            else if(nota>=31 && nota<=35)
                        {
                                                                cout<<"obtuviste una E+";
                        }
                                                                 else if(nota>=26 && nota<=30)
                                                              {
                                                                     cout<<"obtuviste una E";
                                                            }
                                                             else if(nota>=21 && nota<=25)
                                        {
                                                            cout<<"obtuviste una E-";
                                        }
                                                                 else if(nota>=16 && nota<=20)
                                        {
                                                                    cout<<"obtuviste una F+";
                                        }
                                                                 else if(nota>=11 && nota<=15)
                                        {
                                                                    cout<<"obtuviste una F";
                                        }
                                                                     else if(nota>=6 && nota<=10)
                                        {
                                                                    cout<<"obtuviste una F";
                                        }
                                                                         else if(nota>=1 && nota<=5)
                                        {
                                                                        cout<<"obtuviste una F-";
                                        }
                                        else if (nota==0)
                                         {
                                             cout<<"obtuviste una F--";
                                         }                                                                     
                            
    return 0;
}
