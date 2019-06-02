#include <iostream>

using namespace std;

bool Prime(int N)
{
    int n,p=2;
    n=N;
    while(((p>1))&&(p<N))
    {
        if (N%p==0)
            return false;

        p+=1;
    }
    return true;
}

int Large_Factor(int N)
{
    int p=N-1;
    while ((p>0) && (p<N))
    {
        if(N%p==0)
        {
         if (Prime(p)==true)
         return p;
        }
      p--;
    }
}
int main()
{
    int N;
    cout << "Enter number to find Largest Prime factor of it\n\n";
    cin>>N;
    cout<<"Largest prime factor of your diviser\n"<<Large_Factor(N);
    return 0;
}
