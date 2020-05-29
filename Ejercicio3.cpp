#include "iostream"
using namespace std;

main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (numero > 0)
    {
        cout << "el numero es positivo. ";
    }
    else if (numero < 0)
    {
        cout << "El numero es negativo. ";
    }
    else if (numero == 0)
    {
        cout << "El numero es cero. ";
    }

    cout << "\n\n";
    system("pause");
    


}