#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
//swap first and last number
int main()
{
    int a[]={1,5,3,7,33,99,34};
    int x=a[0];
    a[0]=a[6];
    a[6]=x;
    for(int i=0; i<=6; i++)
    cout << a[i] << " ";
    getch();
}
