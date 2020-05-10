#include <iostream>
using namespace std;
int TamanioCharRecursivo (char A[])
{
    if (A[0] == '\0')
        return 0;
    return 1 + TamanioCharRecursivo (A+1);
}

void UnirCadenas (char A[], char B[])
{
    int lenB=TamanioCharRecursivo(B);
    int lenA=TamanioCharRecursivo(A);
    for(int i=lenB; i<lenB+lenA; i++)
        B[i]=A[i-lenB];
    B[lenB+lenA] = '\0'; //marcamos el fin de la cadena
}

int main()
{
    char A[50]= {'\0'};
    char B[100] = {'\0'};

    cout<<"Ingrese una cadena: "<<endl;
    cin.getline(A,50);
    cout<<"Ingrese una cadena: "<<endl;
    cin.getline(B, 100);

    UnirCadenas(A,B);
    cout<<"Mostrando cadenas unidas: "<<B<<endl;
    return 0;
}