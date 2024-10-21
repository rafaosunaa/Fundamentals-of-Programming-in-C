#include <iostream>
#include <string>
using namespace std;

double real(double numero)
{
    double valorAbsoluto=0;
    if(numero<0)
    {
        valorAbsoluto=numero*(-1);
    }else
        {
            valorAbsoluto=numero;
        }
    return valorAbsoluto;
}


int main()
{
    double n;
    cout<<"Introduce un numero: ";
    cin>>n;
    cout<<"el valor absoluto del numero: "<<n<<" es: "<<real(n);

}
