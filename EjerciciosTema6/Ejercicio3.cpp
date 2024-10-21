#include <iostream>
#include <string>
using namespace std;

bool intervalo(int num1,int num2,int num)
{

    if(num>=num1 && num<=num2)
    {
      return true;
    }else{
        return false;
    }

}

int main()
{
    int n1,n2,n;
    cout<<"Introduce el valor inferior del intervalo: "<<endl;
    cin>>n1;
    cout<<"Introduce el valor superior del intervalo: "<<endl;
    cin>>n2;
    cout<<"Introduce un numero: "<<endl;
    cin>>n;

    if(intervalo(n1,n2,n)==true)
    {
       cout<<"El numero "<<n<<" pertenece al intervalo["<<n1<<","<<n2<<"]";
    }else
    {
        cout<<"El numero "<<n<<" no pertenece al intervalo["<<n1<<","<<n2<<"]";
    }



}
