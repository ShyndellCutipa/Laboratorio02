#include <iostream>
using namespace std;

int TamanioCharRecursivo (char A[])
{
    if (A[0] == '\0')
        return 0;
    return 1 + TamanioCharRecursivo (A+1);
}

void CopiaCadena (char A[], char B[])
{
    int lenA=TamanioCharRecursivo(A);
    for (int i = 0; i < lenA; i++)
    {
        B[i]=A[i];
    }
    B[lenA]='\0';
    
}

int main()
{
    char A[50]="Al infinito y mas alla";
    char B[50]="auxilio me desmayo";

    CopiaCadena(A,B);
    cout<<"Ahora B es: "<<B<<endl;

}