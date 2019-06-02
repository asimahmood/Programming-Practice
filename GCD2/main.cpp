#include <iostream>
using namespace std;


int GCD_1(int n1, int n2)
{
    int GCD;
    while(n1%n2!=0)
    {
        GCD=n2;
        n2= n1%n2;
        n1=GCD;
    }
    return n2;
}
int main()
{
    int n1, n2;
    cout << "Enter number: " << endl;
    int N;
    cin >>N;
    cin >>n1;

    while(N>1)
    {
        cin >>n2;
        n1=GCD_1(n1, n2);
        N--;
    }


    cout<< n1;

    return 0;
}
