/** Ejercicio
  Entradas: matriz
    Salidas:  matriz traspuesta
 * */

#include <iostream>

using namespace std;

int main ()
{
    /**VAriable**/

    int m[3][3];
    int t[3][3];


    /**Sentencias**/

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Introduce una valor para la fila "<<i<<" y un valor para la columna "<<j<<" : ";
            cin>>m[i][j];
            t[i][j]=m[i][j];
        }
    }

        for(int i=0;i<3;i++)
        {
            for(int j=0;i<3;i++)
            {

                t[j][i]=t[i][j];
            }
        }

    cout<<"MAtriz:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
    cout << endl;
    }
    cout<<endl;
    cout<<"Matriz traspuesta: "<<endl;
       for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<t[j][i]<<" ";


        }
        cout << endl;
    }


	return 0;
}
