#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
using namespace std;
// find sum and average
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};

    int sum=0, avg=0;
    for(int i=0; i<=10; i++)
    sum+=a[i];
    avg=sum/10;
    cout << "sum: " << sum << endl
         << "average is: " << avg ;

    getch();
}
