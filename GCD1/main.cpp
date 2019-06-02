#include <iostream>
using namespace std;


void GCD_1(int n1, int n2)
{
    int GCD;
    while(n1%n2!=0)
    {
        GCD=n2;
        n2= n1%n2;
        n1=GCD;
    }
    cout<< "GCD is: " <<n2;
}
int main()
{
    int n1, n2;
    cout << "Enter two integers to check there GCD: " << endl;
    cin >>n1 >>n2;

    GCD_1(n1, n2);

    return 0;
}
