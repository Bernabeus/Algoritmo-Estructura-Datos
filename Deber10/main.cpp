#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int menu();
void crear();
void leer();
int main()
{
    int opcion = 0;
    opcion = menu();
    while (opcion != 0){
    switch (opcion){
    case 1:
        crear();
        break;
    case 2:
        leer();
        break;
         }
    opcion = menu();
    }
    return 0;
}

void crear()
{
    string nombre, apellido;
    int edad;
    char a;
    ofstream archivo;
    archivo.open("contactos.txt",ios::out);
    do
    {
        cout<<"\tIngrese el nombre: ";
        cin >> nombre;
        cout<<"\tIngrese el apellido: ";
        cin >> apellido;
        cout<<"\tIngrese la edad: ";
        cin>>edad;
        archivo<<nombre<<" "<<apellido<<" "<<edad<<"\n";
        cout<<"DESEA INGRESAR OTRO CONTACTO s/n: ";
        cin>>a;
        cin.ignore();
    }
    while(a=='s');
    archivo.close();
}
void leer()
{
    string nombre, apellido;
    int edad;

    ifstream archivol("contactos.txt");
    string texto;
    while(!archivol.eof())
    {
        archivol>>nombre>>apellido>>edad;
        if(!archivol.eof())
        {
            getline(archivol,texto);
            cout<<"El nombre es: "<<nombre<<"\n";
            cout<<"El apellido es: "<<apellido<<"\n";
            cout<<"La edad es: "<<edad<<"\n";
            cout << endl;
        }
    }
    archivol.close();
}

int menu()
{
    int op = -1;
    while((op < 0) || (op > 2))
    {
        cout << "1 Crear y escribir en un archivo"<< endl;
        cout << "2 Leer el archivo escrito y mostrar en pantalla lo que esta escrito en el"<< endl;
        cout << "0 Salir"<< endl;
        cout << "Opcion: ";
        cin >> op;
        cout << endl;
        if((op < 0) || (op> 2))
        {
            cout << "   Ingrese una opcion valida" << endl;
        }
    }
    return op;
}
