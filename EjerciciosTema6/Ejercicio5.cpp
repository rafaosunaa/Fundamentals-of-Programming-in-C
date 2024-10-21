#include <iostream>
#include <string>
using namespace std;

int digito(string c)
{
    int a=0;
    for(int i=0;i<c.length();i++)
    {
         if(c[i]=='0' ||c[i]=='1' ||c[i]=='2' ||c[i]=='3' ||c[i]=='4' ||c[i]=='5' ||c[i]=='6' ||c[i]=='7' ||c[i]=='8' ||c[i]=='9')
           {
              a++;
           }
    }
    return a;

}

int main()
{
string caracter;

cout<<"Introduce un caracter: ";
getline(cin,caracter);

cout<<"la cadena de caracteres introducida contine: "<<digito(caracter)<<" caracteres";

return 0;
}
