#include <iostream>

using namespace std;
bool Print_Prime_Factors(int N)
{
    int y=2;
    for(y=2; y<N; y++)
    {
        if (N%y==0)
            return false;
    }
    return true;
}
int main()
{
    int N;
    cout<<"Enter any Number to find there all Prime Factors: ";
    cin>>N;

    int y=N, x=2;
    for (x=2; x<N; x++)
    {
        if((y%x==0) && (Print_Prime_Factors(x)))
        {
            cout<<x<<" x ";
            y=y/x;
            x--;
        }
    }
    cout<<"1 = "<<N <<endl <<endl;

    return 0;
}
