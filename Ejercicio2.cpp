#include "iostream"
using namespace std;

main()
{
    int n1;

    cout << "Ingresa el numero: ";
    cin>> n1;

    if (n1%2==0)
    {
        cout << "\nEl numero es par.";
    }
    else
    {
        cout << "\nEl numero es impar.";
    }
    
    cout << "\n\n";
    system("pause");

}