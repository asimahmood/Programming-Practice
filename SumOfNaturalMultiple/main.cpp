#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int n=500;
    while(n<=3000)
    {
        if(n%3==0 && n%5!=0)
        {
            sum+=n;
        }

        if(n%5==0 && n%3!=0)
        {
            sum+=n;
        }

        n++;

    }
    cout << "sum is: " <<sum << endl;
    return 0;
}
