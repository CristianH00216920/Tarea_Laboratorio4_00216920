#include "iostream"
#include "windows.h"
#include "string.h"

using namespace std;

main()
{
     char palabra[1000];
     int contar;

     cout << "Ingresa una palabra: ";
     cin >> palabra;

    contar = strlen(palabra);

    if (contar > 10){
        cout << "\n\nTiene mas de 10 digitos";
    }
    else if(contar < 10)
    {
        cout << "\n\ntiene menos de 10 digitos";
    }

    if(contar % 2 == 0)
    {
        cout << " y la longitud es par.";
    }
    else if (contar % 2 != 0)
    {
        cout << " y la longitud es impar.";
    }

    cout << "\n\n";
    system("pause");

}