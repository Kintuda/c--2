#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void imprimir(char* n){
    static int contador = 0;
    int tamanho = strlen(n);
    if(*n == 0){
        return;
    }
    else{
        imprimir(n+1);
        cout << *n;
    }
}
int main()
{
    //cout << "Hello world!" << endl;
    char teste[10] = "testes";
    imprimir(teste);
    return 0;
}
