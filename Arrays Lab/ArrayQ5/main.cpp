#include <iostream>
#include <conio.h>
using namespace std;
// find the largest and smallest number
void Sum_of_Array(int A[],int Asize)
{
    int Largest=A[0];
    int Smallest=A[0];

    for(int i=1; i<Asize; i++)
    {
        if(A[i]>Largest)
            Largest=A[i];

        if(A[i]<Smallest)
            Smallest=A[i];

    }

    cout<<"Largest is: "<<Largest<<endl;
    cout<<"\nSmallest is: "<<Smallest;
}



int main()
{
    int A[]= {1,22,560,6,7,8,9,11};
    int Asize=10;
    Sum_of_Array(A,Asize);

    getch();
    return 0;
}
