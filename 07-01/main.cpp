#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void ingresar(int t, int e, int a[]);
void encontrar(int t, int e, int a[]);
void archivo(int t, int e, int a[]);

int main()
{
    int t= 0, e=0;
    int a[20];
    ingresar(t, e ,a);

    return 0;
}

void ingresar(int t, int e, int a[])
{
    setlocale(LC_CTYPE,"Spanish");
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> t;
    cout << "Ingrese todos los elementos del arreglo"<< endl;
    for(int i = 0; i < t; i++){
        cin >> a[i];
    }
     cout << "Ingrese el elemento a encontrar en el arreglo: ";
     cin >> e;
    cout << endl;
     encontrar(t, e, a);
}

void encontrar(int t, int e, int a[]){
    bool z = false;
    cout << "\tEl arreglo es: ";
    for(int i = 0; i < t; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < t; i++){
        if(a[i] == e){
            cout << "\t!Elemento encontrado en la posicion " << i+1 << "! "<< endl;
            z = true;
        }
    }
    if(z == false){
            cout << "\t!El elemento no se encuentra en el arreglo!" << endl;
        }
        cout << endl;
        archivo(t, e, a);
}

void archivo(int t, int e, int a[]){
    bool z = false;
    string nombrearchivo;
    ofstream archivo;
    cin.ignore();
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombrearchivo);
    archivo.open(nombrearchivo.c_str());
    for(int i = 0; i < t; i++){
        if(a[i] == e){
            archivo << "!Elemento encontrado en la posicion " << i+1 << "! "<< endl;
            z = true;
        }
    }
    if(z == false){
            archivo << "!El elemento no se encuentra en el arreglo!" << endl;
        }
    archivo.close();

}



