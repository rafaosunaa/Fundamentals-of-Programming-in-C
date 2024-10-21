/**
        Ejercicio 13
    Entradas: longitud de los tres lados de un triangulo
    Salidas: decir que tipo de triangulo es

 **/

 #include <iostream>
 using namespace std;

 int main()
 {
    /**Variables**/
    int a,b,c;

    /**SEntencias**/
    cout<<"Introduce el valor del lado a: ";
    cin>>a;
    cout<<"INtroduce el valor del lado b: ";
    cin>>b;
    cout<<"INtroduce el valor del lado c: ";
    cin>>c;

    if(a>(b+c) || a==(b+c))
    {
        cout<<"No es un triangulo";
    }else
        {
            if((a*a)==(b*b+c*c))
                {
                    cout<<"Se trata de un triangulo rectangulo";
                }else
                    {
                        if((a*a)>(b*b+c*c))
                        {
                            cout<<"Se trata de un triangulo acutangulo";
                        }else
                            {
                                cout<<"Se trata de un triangulo obtusangulo";
                            }
                    }
        }

 return 0;
 }
