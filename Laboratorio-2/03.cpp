#include <iostream>
using namespace std;
void OrdenAscendiente(int A[], int n)
{
    int temp = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[i]>A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
                //swap(A[i], A[j]); //swap es una funcion para intercambiar valores 
            }
        }
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
    int A[]={7,3,6,-9,3,5,1,4,9};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"Mostrando arreglo: ";
    mostrar (A,n);
    cout<<"Arreglo ordenado de manera ascendente: ";
    OrdenAscendiente(A,n);
    mostrar(A,n);
}