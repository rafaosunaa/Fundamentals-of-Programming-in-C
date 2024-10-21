#include <iostream>
#include <string>

using namespace std;
bool cadena(string cadena1,string cadena2)
{
    string mayor;
    string menor;
    if(cadena1.length()>cadena2.length())
    {
        return true;


    }else
    {
        return false;
    }
}

int main()
{
    string c1;
    string c2;

    cout<<"Introduce una cadena: ";
    getline(cin,c1);
    cout<<"Introduce otra cadena: ";
    getline(cin,c2);

    if(cadena(c1,c2))
        {
             cout<<"La cadena mayor es: "<<c1<<endl;
            cout<<"La cadena mayor es: "<<c2<<endl;
        }else
            {
                cout<<"La cadena mayor es: "<<c2<<endl;
            cout<<"La cadena mayor es: "<<c1<<endl;
            }



}
