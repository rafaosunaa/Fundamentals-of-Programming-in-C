#include <iostream>

using namespace std;

int main ()
{
	/**Variables**/
	const int tMax=10;
	int v[tMax]={1,2,3,4,5,6,7,8,9,10};
	int par[tMax];
	int impar[tMax];
	int p=0,im=0,j=0;

	/**Sentecias**/

	for(int i=0;i<tMax;i++)
	{
        if(v[i]%2==0)
        {
            par[j]=v[i];
            j++;
        }else
            {
                impar[im]=v[i];
                im++;
            }
	}

    int v1=0;
	for(int i=0;i<j;i++)
	{

        v[v1]=par[i];
        v1++;
	}
	for(int i=0;i<im;i++)
	{

        v[v1]=impar[i];
        v1++;
	}

	for(int i=0;i<tMax;i++)
	{
        cout<<v[i];
	}


	return 0;
}
