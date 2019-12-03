#include <iostream>
using namespace std;

int menu();
const int tope = 20;
int main()
{
    int opcion, cont=0, aux, sump = 0, sumi = 0;
    int ingreso, cuenta[tope];
    cout << "Ingrese un opcion" << endl;
    opcion = menu();
    while (opcion != 7)
    {
        switch(opcion)
        {
        case 1:
            cout<< "Buenas tardes. Bienvenido estimado cliente" << endl;
            break;
        case 2:
            do
            {
                cout << "Ingrese la cantidad de dinero que desee(0 para terminar el ingreso): ";
                cin >> ingreso;
                cuenta[cont] = ingreso;
                cont++;
            }
            while(ingreso != 0);
            break;
        case 3:
            cout << "El total de dinero ingresado es: " << endl;
            for(int i = 0; i < cont; i++)
            {
                cout << cuenta [i] << " ";
            }
            cout << endl;
            for(int i = 0; i < cont; i++)
            {
                for(int j = i+1; j < cont; j++)
                {
                    if(cuenta[j] < cuenta[i])
                    {
                        aux = cuenta[i];
                        cuenta[i] = cuenta[j];
                        cuenta[j] = aux;
                    }
                }
            }
            cout << "El dinero ingresado ordenado mediante el algoritmo de seleccion es: " << endl;
            for(int i = 0; i < cont; i++)
            {
                cout << cuenta [i] << " ";
            }
            cout << endl;
            break;
        case 4:
            for(int i = 0; i < cont; i++)
            {
                for(int j = i+1; j < cont; j++)
                {
                    if(cuenta[j] < cuenta[i])
                    {
                        aux = cuenta[i];
                        cuenta[i] = cuenta[j];
                        cuenta[j] = aux;
                    }
                }
            }
            cout << "El dinero ingresado ordenado de menor a mayor es: " << endl;
            for(int i = 0; i < cont; i++)
            {
                cout << cuenta [i] << " ";
            }
            cout << endl;
            break;
        case 5:
            for(int i = 0; i < cont; i++)
            {
                for(int j = i+1; j < cont; j++)
                {
                    if(cuenta[j] > cuenta[i])
                    {
                        aux = cuenta[i];
                        cuenta[i] = cuenta[j];
                        cuenta[j] = aux;
                    }
                }
            }
            cout << "El dinero ingresado ordenado de mayor a menor es: " << endl;
            for(int i = 0; i < cont; i++)
            {
                cout << cuenta [i] << " ";
            }
            cout << endl;
            break;
        case 6:
            for(int i = 0; i < cont; i++)
            {
                if(cuenta[i] % 2 == 0){
                    sump = sump + cuenta[i];
                }else{
                    sumi = sumi + cuenta[i];
                }
            }
            cout << "La suma de los numeros pares del arreglo es:" << sump << endl;
            cout << "La suma de los numeros impares del arreglo es:" << sumi << endl;
            cout << endl;
            break;
        }
        cout << endl;
        opcion = menu();
    }
    return 0;
}

int menu()
{
    int op = -1;
    while((op < 0) || (op > 7))
    {
        cout << "1. Bienvenida"<< endl;
        cout << "2. Ingresar dinero"<< endl;
        cout << "3. Ordenar la ingresada de dinero"<< endl;
        cout << "4. Mostrar los elementos ingresados de menor a mayor"<< endl;
        cout << "5. Mostrar los elementos ingresados de mayor a menor" << endl;
        cout << "6. Mostrar la suma de los elementos pares e impares del arreglo" << endl;
        cout << "7. Salir"<< endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> op;
        cout << endl;
        if((op < 0) || (op > 7))
        {
            cout << "¡Opcion no válida!" << endl;
        }
    }
    return op;
}


