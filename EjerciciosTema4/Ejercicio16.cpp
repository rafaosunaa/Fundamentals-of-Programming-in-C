/**
        Ejercicio 16
    Entrada:leer notas de 5 alumnos en 3 examenes diferentes
    Salida: alumnos que aprobaron los 3 examenes, los que aprobaron al menos 1, alumnos que aprobaron solo el ultimo;

**/

#include <iostream>
using namespace std;

int main()
{
    /**Variables**/
    float n1,n2,n3,todosA=0,unoA=0,ultimo=0;
    const int alum=5;

    /**Sentencias**/


    for(int i=1;i<=alum;i++)
    {
        cout<<"Introduce la nota del primer examen: ";
        cin>>n1;
        cout<<"Introduce la nota del segundo examen: ";
        cin>>n2;
        cout<<"Introduce la nota del tercer examen: ";
        cin>>n3;
        cout<<endl;

        if(n1>=5 && n2>=5 && n3>=5)
        {
            todosA++;
        }

            if(n1>=5 || n2>=5 || n3>=5)
            {
                unoA++;
            }

                if(n3>=5 && n1<5 && n2<5)
                {
                    ultimo++;
                }

    }

    cout<<"Alumnos que aprobaron todos los examenes: "<<todosA<<endl;
    cout<<"Alumnos que han aprobado almenos un examen: "<<unoA<<endl;
    cout<<"Alumnos que solo han aprobado el ultimo examen: "<<ultimo<<endl;

return 0;
}
