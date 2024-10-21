#include <iostream>
using namespace std;

const int tMax=1000;


struct estudiante
{
    string nombre;
    float notaT,notaP;

};


void mostrar(estudiante alumno[],int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<"Nombre del alumno: "<<alumno[i].nombre<<endl;
        cout<<"Nota de teoria: "<<alumno[i].notaT<<endl;
        cout<<"Nota de practicas: "<<alumno[i].notaP<<endl;
        cout<<"Su nota final es: "<<(alumno[i].notaT+alumno[i].notaP)/2<<endl;
        cout<<"..........."<<endl;
    }
}


string name(estudiante alumno[],int tam)
{
  int  notaF=0,menor=0;
  string n="NO";
    string nombre;

    for(int i=0;i<tam;i++)
    {
        notaF=(alumno[i].notaT+alumno[i].notaP)/2;
        menor=notaF;
        if(notaF<menor && notaF>=5)
        {
            menor=notaF;
            nombre=alumno[i].nombre;
        }

    }

    return nombre;
}

string aprobar(estudiante alumno[],int tam,string nombre,bool& existe,bool& aprueba)
{
    int notaF=0;
    existe=false;
    aprueba=false;
  for(int i=0;i<tam;i++)
  {
    notaF=(alumno[i].notaT+alumno[i].notaP)/2;
    if(nombre==alumno[i].nombre)
    {
        existe=true;
    }

    if(nombre==alumno[i].nombre && notaF>=5)
    {
        aprueba= true;
    }
  }

}

void uno(estudiante alumno[],int tam,string unA[],int t1)
{
    int t2=0;
    for(int i=0;i<tam;i++)
    {
        if(alumno[i].notaT>=5 && alumno[i].notaP<5)
        {
            unA[t2]=alumno[i].nombre;
            t2++;
        }
        if(alumno[i].notaP>=5 && alumno[i].notaT<5)
        {
            unA[t2]=alumno[i].nombre;
            t2++;
        }

    }

}

int main()
{
    int tam;
    estudiante alumno[tMax];

    do
    {
        cout<<"Introduce el numero de alumnos que vas a registrar: ";
        cin>>tam;
    }while(tam<0 && tam>tMax);

    for(int i=0;i<tam;i++)
    {
        cout<<"Introduce el nombre del alumno: ";
        cin>>alumno[i].nombre;

        do
        {
            cout<<"Introduce la nota de teoria: ";
            cin>>alumno[i].notaT;
        }while(alumno[i].notaT<0 && alumno[i].notaT>10);

        do
        {
            cout<<"Introduce la nota de practicas: ";
            cin>>alumno[i].notaP;
        }while(alumno[i].notaP<0 && alumno[i].notaP>10);

    }
    mostrar(alumno,tam);
    cout<<endl;

    cout<<"El alumno que a aprobado con menos nota es: "<<name(alumno,tam)<<endl;

   string nombre;
   bool existe,aprueba;
    cout<<"Introduce un nombre: "<<endl;
    cin>>nombre;

    aprobar(alumno,tam,nombre,existe,aprueba);

    if(!existe)
    {
        cout<<"El alumno no existe"<<endl;
    }else
        {
            cout<<"El alumno existe"<<endl;
        }

    if(!aprueba)
    {
        cout<<"El alumno no aprueba"<<endl;
    }else
        {
            cout<<"El alumno tambien aprueba"<<endl;
        }


    int t1;
    string unA[tMax];
    uno(alumno,tam,unA,t1);
    cout<<"alumno solo con una nota aprobada: "<<endl;

    for(int i=0;i<tam;i++)
    {
        cout<<unA[i]<<endl;
    }



return 0;
}


