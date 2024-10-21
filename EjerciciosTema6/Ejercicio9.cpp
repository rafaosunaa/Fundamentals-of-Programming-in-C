#include <iostream>
using namespace std;


void cambio(int n,int n1)
{
    int a;
    n=n1;
    n1=a;
    cout<<"Los valores ha ncambiado, tu primer numero ahora es: "<<n
}

int main()
{
    int num;
    int num1;

    cout<<"Introduce un primer numero: ";
    cin>>num;
    cout<<"Introduce un segundo numero: ";
    cin>>num1;

    cambio(num,num1);


}
