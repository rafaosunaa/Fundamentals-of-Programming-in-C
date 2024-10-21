#include <iostream>
#include <string>

using namespace std;

struct persona {
	string nombre;
	bool minusvalia;
};

int main ()
{
	const int tMax=1000;
	persona v[tMax];
    string nombre1;
    char m;
    int i=0;
    string fin="salir";

    cout<<".....Para finalizar introduce salir..."<<endl;
    cout<<"Introduce el nombre de la persona: ";
    cin>>nombre1;

    while(i<tMax && nombre1 != fin)
    {
        v[i].nombre=nombre1;
        do{
                cout<<"Minusvalia: s(SI) o n(NO): ";
                cin>>m;
        }while(m != 's' && m != 'n' );
        v[i].minusvalia=m=='s';
        i++;
        cout<<".....Para finalizar introduce salir..."<<endl;
        cout<<"Introduce el nombre de la persona: ";
        cin>>nombre1;
    }


    persona con[tMax];
    persona sin[tMax];
    int j=0;
    int f=0;

    for(int a=0; a<i;a++)
    {
        if(v[a].minusvalia)
        {
            con[j]=v[a];
            j++;
        }else
            {
                sin[f]=v[a];
                f++;
            }
    }

    for(int a=0;i<j;i++)
    {
        cout<<con[a].nombre<<" tiene minusvalia."<<endl;
    }
    for(int a=0;i<f;i++)
    {
        cout<<sin[a].nombre<<" no tiene minusvalia."<<endl;
    }

return 0;
}
