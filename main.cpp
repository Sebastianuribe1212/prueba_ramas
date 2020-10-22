/*
 * Sebastián Uribe Álvarez
 */
#include <iostream>

//Variables globales y macros
#define TAM (int)10
using namespace std;

int main()
{
    char a[TAM] = "AB11CD44";


    for(int var = 0; var < TAM; ++var){
        cout << a[var]<<endl;
    }
    return 0;


// sacar numeros
cout << "Imprimir solo los numeros de la cadena original"<<endl;

for(int var =0; var < TAM; ++var){
    if(a[var]>= '0' or a[var] <= '9'){
        cout << a[var]<<endl;
    }

   }
}
