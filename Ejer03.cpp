#include<iostream>
#include <fstream>
using namespace std;

int main(void)
{
 
    int x; //Numero a ingresar por usuario
    int cant=0; //Contador de cantidad de numeros ingresados
    float suma=0, prom;

    cout << "Ingrese el primer numero: "<< endl;
    cin >> x;
    while (x>=0)
    {
        suma = suma+x;
        cant++;
        cout << "\n\nIngrese el siguente numero o ingrese un numero negativo para finalizar: "<< endl;
        cin >> x;
    }

    prom = suma / cant;

    ofstream archivo("Suma_Promedio_N_Numeros.txt", ios::app);
    
    archivo << "\nLa suma de los números es: "<< suma << endl;
    archivo << "El promedio de los números es: "<< prom << endl ;
    
    getchar();
}