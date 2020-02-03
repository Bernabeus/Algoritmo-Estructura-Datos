#include <iostream>
using namespace std;

void ordenamiento(int a[]);
void imprimir(int a[]);

int main()
{
	int arreglo[] = { 3,7,4,2,9 };
	ordenamiento(arreglo);
	imprimir(arreglo);
	return 0;
}


void imprimir(int a[]) {
	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
}

void ordenamiento(int a[]) {
	int temp;
	int j;

	for (int i = 1; i < 5; i++) {
		temp = a[i];
		j = i - 1;
		while ((a[j] > temp) && (j >= 0)) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}