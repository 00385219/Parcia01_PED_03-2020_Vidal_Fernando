#include <iostream>
#include <string.h>
using namespace std;
 
int main(void)
{
    char cadena[100];
    cout << "\nIngrese una frase: \n";
    cin.getline (cadena, 100, '\n');
    
    int longitud = strlen(cadena);
    char temporal;

    for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);izquierda++, derecha--) 
        {
            temporal = cadena[izquierda];
            cadena[izquierda] = cadena[derecha];
            cadena[derecha] = temporal;
        }
    
    cout << "\nLa frase al revez es:\n" << cadena << endl;

    getchar();
}