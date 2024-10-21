#include <iostream>
#include <string>
using namespace std;

string a(string cadena1,string cadena2 )
{
    if(cadena1.length()>cadena2.length())
    {
        return cadena1;
    }else if(cadena2.length()>cadena1.length())
        {
            return cadena2;
        }else if(cadena1.length()==cadena2.length())
        {
            return cadena1;
        }
}

int main()
{
    string c1,c2;

    cout<<"Introduce una cadena: "<<endl;
    cin>>c1;
    cout<<"Introduce otra cadena: "<<endl;
    cin>>c2;

    cout<<"La cadena mas larga es: "<<a(c1,c2);
}
