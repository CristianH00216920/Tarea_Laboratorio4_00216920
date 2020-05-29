#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;

char UL(char* cadena)
    {
        return cadena[strlen(cadena)-1];
    }

main()
{

    char palabra[100];

    cout << "Ingresa una palabra: ";
    cin >> palabra;
    


    if(palabra[0] == UL(palabra))
    {
        cout << "\n\nLa palabra comienza y termina con la misma letra.";
    }
    else
    {
        cout << "\n\nLa palabra  no comienza y no termina con la misma letra.";
    }
    

    cout << "\n\n";
    system("pause");


}