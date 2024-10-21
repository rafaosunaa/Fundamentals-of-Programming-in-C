/*
        Rafa Osuna Ventura
    Ejercicio 1
    Entradas: edad(numero entero entre 0 y 90), sexo(M o F ),
            nº de veces que utiliza el transporte publico al dia(entero mayor igual que 0)
    Salidas: utilizacion media del transporte pueblico por parte del sexo masculino
            porcentaje de personas con edad comprendida entre 18 y 50 años que utilizan el transporte
            publico mas de 3 veces al dia.
            Edad y sexo de la persona encuestada que amas ha utilizado el transporte publico


*/


#include <iostream>
using namespace std;


int main()
{
int edad,nveces,nH=0,c1=0,media=0,nPersonas=0,c2=0,porcentaje=0,nMax=0,eMax=0;
char sexo,continuar='s',sMax;

while(continuar=='s')
{
    do
    {
        cout<<"introduce tu edad: ";
        cin>>edad;
    }while(edad>=0 && edad>=90);

    do
    {
        cout<<"introduce tu sexo, M si eres hombre y F si eres mujer: ";
        cin>>sexo;
    }while(sexo!='M' && sexo!='F');

        if(sexo=='M')
        {
            nH++;
        }



    do
    {
        cout<<"Introduce cuantas veces coges el transporte publico: ";
        cin>>nveces;
    }while(nveces<0);

    if(nveces>0 && sexo=='M')
    {
        c1=c1+nveces;
    }

    if(edad>=18 && edad<=50 && nveces>=3)
    {
        c2++;
    }

    if(nveces>nMax)
    {
        nMax=nveces;
        eMax=edad;
        sMax=sexo;

    }

    nPersonas++;
    cout<<"Introduce s para introducir otra persona, cualquier otra letra finalizara el programa: ";
    cin>>continuar;

}
if(nH!=0)
{
   media=c1/nH;
}

cout<<"La utilizacion media del transporte publico por parte del sexo masculino es: "<<media<<endl;

porcentaje=c2/nPersonas;
cout<<"El porcentaje de personas entre 18 y 50 años que cogen el transporte publico mas de 3 veces es: "<<porcentaje*100<<"%"<<endl;

cout<<"La edad y sexo de la persona encuestada que mas ha utilizado el transporte publico es: "<<eMax<<" y "<<sMax;
return 0;
}







