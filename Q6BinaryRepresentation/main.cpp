#include <iostream>

using namespace std;


void BinaryRepresentation(int n)
{
    int m=0,K=1;
    while(n>1)
    {
        m=m+(n%2);
        if(m==0)
        {
            K=K*10;
        }
        m=m*10;
        n=n/2;
    }
    m=m+n;
    n=m,m=0;
    while(n>10)
    {
        m=m+(n%10);
        if(m==0)
            m=00;
        else

            m=m*10;
        n=n/10;
    }
    m=(m+n)*K;
    cout<<m;
}

int main()
{
    int n;
    cout << "Enter Decimal number to convert into Binary: \n";
    cin>>n;
    BinaryRepresentation(n);
    return 0;
}
