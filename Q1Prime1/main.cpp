#include <iostream>
using namespace std;

bool Prime(int N)
{
    int n,p=2;
    n=N;

    while((p>1)&&(p<N))
    {
        if (N%p==0)
        {
            return false;
        }

        p+=1;
    }

    return true;
}
int main()
{
    int num;
    cin>>num;
    if(Prime(num)==false)
    {
        cout<<"\nYour Number is NOT prime\n";
    }
    else cout<<"\nYour Number is PRIME\n";
    return 0;
}
