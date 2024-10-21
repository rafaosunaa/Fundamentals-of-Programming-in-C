#include <iostream>
using namespace std;

char dni(int n)
{
   int resto=0;
   resto=n%23;
char l;
   char letras[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};

    for(int i=0;i<22;i++)
    {
        if(i==resto)
        {
            l=letras[i];
        }
    }
    return l;
}

int main()
{
    int num;
    char letra;


    do{
        cout<<"Introduce tu dni sin letra: ";
       cin>>num;
       cout<<"Introduce la letra de tu dni(mayuscula): ";
       cin>>letra;
       if(dni(num)!=letra)
        cout<<"la letra introducida no coincide con tu dni"<<endl;
    }while(dni(num)!=letra);




    cout<<"La letra correspondiente a tu dni es: "<<dni(num);


    return 0;
}
