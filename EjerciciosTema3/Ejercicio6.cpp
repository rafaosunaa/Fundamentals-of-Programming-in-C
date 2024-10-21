/**
        Ejercicio 6
        Entrada: 3 numeros
        SAlida: decir cual es mayor
 **/

 #include <iostream>
 using namespace std;

 int main()
 {
    /**Variables**/

    int n1,n2,n3;

    /**Sentencias**/

    cout<<"Introduce el primer numero: ";
    cin>>n1;
    cout<<"Introduce el segundo numero: ";
    cin>>n2;
    cout<<"INtroduce el tercer numero: ";
    cin>>n3;

    if(n1>n2 && n1>n3)
    {
        cout<<"EL numero "<<n1<<" es el mayor";
    }else
        {
            if(n2>n1 && n2>n3)
            {
                cout<<"EL numero "<<n2<<" es el mayor";
            }else
            {
                cout<<"EL numero "<<n3<<" es el mayor";
            }

        }


 return 0;
 }
