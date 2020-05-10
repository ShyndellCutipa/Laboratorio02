#include <iostream>
using namespace std;

void Ingresar (int A[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"Ingrese elemento "<<i<<": ";
        cin>>A[i];
    }
}
void Mostrar (int A[ ], int n)
{
    for (int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int SumaIterativa(int A[],int n)
{
    int suma=0;
    for (int i=0; i<n ;i++)
            suma=suma+A[i];
    return suma;
}

int SumaRecursiva(int A[], int n)
{
    if (n==0)
        return 0;
    return A[0] + SumaRecursiva(A+1, n-1);
}



int main ()
{
    int n;
    cout<<"Ingrese longitud del arreglo: ";
    cin>>n;

    int A[n] = {0};

    Ingresar (A,n);
    cout<<"Mostrando arreglo: ";
    Mostrar (A, n);
    cout<< "La suma iterativa de los elementos del arreglo es: "<< SumaIterativa(A, n)<<endl;
    cout<< "La suma recursiva de los elementos del arreglo es: "<< SumaRecursiva(A, n)<<endl;

    return 0;
}
