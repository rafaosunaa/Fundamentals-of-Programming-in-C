#include <iostream>
using namespace std;

bool primo(int num)
{
    if(num>1 && num%num==0 && num%2!=0)
    {
        return true;
    }else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Introduce un entero positivo: ";
    cin>>n;

    if(primo(n))
       {
          cout<<"El numero es primo";
       }else{
            cout<<"El numero no es primo";
       }
    return 0;
}
