#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    string mayor="";
    string menor;

    cout<<"Si desea salir introduzca FIN"<<endl;
    cout<<"Introduce una cadena: ";
    getline(cin,cadena);
    menor=cadena;

       while(cadena !="FIN")
       {

                if(cadena.length()>mayor.length())
                {
                    mayor=cadena;
                }

                if(cadena.length()<menor.length())
                {
                    menor=cadena;
                }

            cout<<"Si desea salir introduzca FIN"<<endl;
            cout<<"Introduce una cadena: ";
            getline(cin,cadena);
       }

    cout<<"La linea mas larga es: "<<mayor<<endl;
    cout<<"La linea mas corta es: "<<menor<<endl;

return 0;
}
