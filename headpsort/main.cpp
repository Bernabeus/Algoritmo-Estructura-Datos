#include <iostream>

using namespace std;

#include "head.h"
#include "headpsort.h"
#include "mostrar.h"

using namespace datos;

void headpsort(int b[], int n);

int main()
{
    int a[100], n;
    cout << "INGRESE EL TAMANIO: ";
    cin >> n;
    insertar(a, n);
    headpsort(a, n);
    cout << endl;
    mostrar(a, n);
    return 0;
}


