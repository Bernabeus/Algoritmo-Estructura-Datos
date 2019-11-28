#include <iostream>
using namespace std;

void ordenamiento(int a[]);
void imprimir(int a[]);

int main()
{
    int arreglo[] = {3,7,4,2,9};
    ordenamiento(arreglo);
    imprimir(arreglo);
    return 0;
}


void imprimir(int a[]){
for(int i= 0; i < 5; i++){
        cout << a[i];
    }
}

void ordenamiento(int a[]){
    int aux, min;
     for(int i = 0; i < 5; i++){
        min = i;
        for (int j = i+1; j < 5; j++){
        if(a[j]< a[min]){
            min = j;
        }
    }
    aux = a[i];
    a[i] = a[min];
    a[min] = aux;
     }
}
