#include <iostream>

using namespace std;

bool Prime(int N)
{
    int n,p=2;
    n=N;
    while(((p>1))&&(p<N))
    {
        if (N%p==0){
        return false;}
        p+=1;
    }
    return true;
}
int main()
{
    int N, H;
    cout<<"How many different numbers you want to check?\n";
    cin>>H;
    int x=1;
    do
    {
        cout<<"\nEnter numbers till your Range\n";
        cin>>N;
        if(Prime(N)==false)
        {
            cout<<"\Your Number is NOT Prime\n";
        }
        else {cout<<"\Your Number is PRIME\n";}
        x=x+1;
    }
    while(x<=H);
    return 0;
}
