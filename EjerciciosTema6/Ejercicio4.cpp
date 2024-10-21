#include <iostream>
using namespace std;

bool digito(char c)
{
    if(c=='0' ||c=='1' ||c=='2' ||c=='3' ||c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9')
    {
        return true;
    }else
        {
            return false;
        }
}

int main()
{
char caracter;

cout<<"Introduce un caracter: ";
cin>>caracter;

if(digito(caracter)==true)
{
    cout<<"El caracter es un digito";
}else
    {
        cout<<"El caracter no es un digito";
    }

return 0;
}
