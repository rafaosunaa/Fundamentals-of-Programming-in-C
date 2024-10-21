/**
        Ejercicio 14
    Entrada: dos numeros reales y un caracter
    Salida: en funcion del caracter mostrar diferente salida

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    double i,j;
    char c;

    /**Sentencias**/
    cout<<"Introduce un numero: ";
    cin>>i;
    cout<<"Introduce otro numero: ";
    cin>>j;
    cout<<"INtroduce un caracter (+,-,/,*,x): ";
    cin>>c;

/**Opcion If Anidada**/

   /** if(c=='+')
    {
        cout<<"La suma es: "<<i+j;
    }else
        {
            if(c=='-')
                {
                    cout<<"La resta es: "<<i-j;
                }else
                    {
                        if(c=='*' || c=='x')
                            {
                                cout<<"La multiplicacion es: "<<i*j;
                            }else
                                {
                                    if(c=='/')
                                        {
                                            cout<<"La division es: "<<i/j;
                                        }else
                                            {
                                                cout<<"Operacion no comtemplada";
                                            }
                                }
                    }
        }**/

/** Opcion Switch**/

    switch(c)
    {
        case '+':
            cout<<"La suma es: "<<i+j  <<endl;
            break;

        case '-':
            cout<<"La resta es: "<<i-j;
            break;

        case '*':
             cout<<"La multiplicacion es: "<<i*j;
             break;

        case 'x':
             cout<<"La multiplicacion es: "<<i*j;
             break;

        case '/':
            cout<<"La division es: "<<i/j;
            break;

        default:
            cout<<"Operacion no comtemplada";

    }

return 0;
}
