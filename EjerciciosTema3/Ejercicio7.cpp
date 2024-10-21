/**
        Ejercicio 7
        Entrada: 4 numeros
        SAlida: decir cual es mayor
 **/

 #include <iostream>
 using namespace std;

 int main()
 {
    /**Variables**/

    int n1,n2,n3,n4;

    /**Sentencias**/

    cout<<"Introduce el primer numero: ";
    cin>>n1;
    cout<<"Introduce el segundo numero: ";
    cin>>n2;
    cout<<"INtroduce el tercer numero: ";
    cin>>n3;
    cout<<"INtroduce el cuarto numero: ";
    cin>>n4;

    if(n1>n2 && n1>n3 && n1>n4)
    {
        cout<<"EL numero "<<n1<<" es el mayor";
    }else
        {
            if(n2>n1 && n2>n3 && n2>n4)
            {
                cout<<"EL numero "<<n2<<" es el mayor";
            }else
            {
                if(n3>n1 && n3>2 && n3>n4)
                {
                    cout<<"EL numero "<<n3<<" es el mayor";
                }else
                {
                    cout<<"EL numero "<<n4<<" es el mayor";
                }
            }

        }


 return 0;
 }
