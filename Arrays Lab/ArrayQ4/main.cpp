#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// find the largest number
int main()
{
    int a[]={1,100,2,7,33,99,34};
    int asize=6, large=a[0];
    for(int i=0; i<=asize; i++)
    {
        if(large>a[i+1])
            large=large;
        else
            large=a[i+1];

    }
        cout << "larger number is: " << large;

}
