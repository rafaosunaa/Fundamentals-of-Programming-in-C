#include <iostream>
#include <string>
using namespace std;

int main()
{
   string palabra;
	cout << "Introduzca una palabra: ";
	cin >> palabra;
	bool palindromo = true;
	int i = 0;
	int j = palabra.length () - 1;
	while (palindromo && (i < j)) {
		if (palabra[i] != palabra[j]) {
			palindromo = false;
		} else {
			i++;
			j--;
		}
	}

    if(palabra.length())
    {
        cout<<"Si es palindromo";
    }  else{

        cout<<"No es un palindromo";
    }







return 0;
}
