#include <iostream>

using namespace std;

int main()
{
    int N,a=1, b=a+1, c=a+2;
    cout << "Enter any number to find multiples of it: \n";
    cin>>N;
    for(int a=1; a<=N; a++)
    {
       if (a*(a+1)*(a+2)==N)
            {
                cout<<a<<' '<<a+1<<' '<<a+2;
            }
    }
    return 0;
}
