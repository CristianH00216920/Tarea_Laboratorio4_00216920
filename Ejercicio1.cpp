#include "iostream"
using namespace std;

main()
{
    int n1,n2;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    if (n1 % n2 == 0)
    {
        cout << "Son divisibles";
    }else
    {
        cout << "No son divisibles";
    }
    
    cout << "\n\n";
    system("pause");





}