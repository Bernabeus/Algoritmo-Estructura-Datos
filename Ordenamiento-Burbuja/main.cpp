#include <iostream>
using namespace std;

void ingresar(int a[], int n);
void burbujas(int a[], int n);
void imprimir(int a[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de elementos que tendra su arreglo: ";
    cin >> n;
    int arreglo[n];
    ingresar(arreglo, n);
    burbujas(arreglo, n);
    cout << "El arreglo ordenado de forma ascendente es: " << endl;
    imprimir(arreglo, n);

    return 0;
}

void burbujas(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <= n-1; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

void imprimir(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ingresar(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i+1 << " del arreglo; "<< endl;
        cin >> a[i];
    }
}
