#include <iostream>
using namespace std;

void InversionIterativa (int A[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = temp;
    }
}

void InversionRecursiva (int A[], int n)
{
    if (n>0) 
    { 
        int temp = A[0];
        A[0] = A[n-1];
        A[n-1] = temp;
        InversionRecursiva(A+1, n-2);
    }
}

void mostrar (int A[ ], int n)
{
    for (int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
int main()
{
    int n=4;
    int A[n]={1,2,7,3};
    cout<<"Mostrando arreglo: ";
    mostrar(A,n);
    cout<<"Arreglo invertido de manera iterativa: ";
    InversionIterativa(A,n);
    mostrar(A,n);
    cout<<"Arreglo invertido de manera recursiva: ";
    InversionRecursiva (A,n);
    mostrar(A,n);

    return 0;
}