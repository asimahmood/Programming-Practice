#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// reverse the array
int main()
{
    int a[]={1,5,2,7,33,99,34};
    int tmpr;
    int asize=6;
    for(int i=0; i<=asize/2; i++)
    {
        tmpr=a[i];
        a[i]=a[asize-i];
        a[asize-i]=tmpr;
    }
    for(int i=0; i<=asize; i++)
    {
        cout << a[i] << " ";
    }
    getch();
}
