#include <iostream>
using namespace std;

int Nth_Triangle(int N)
{
    int sum=0;

    sum=N*(N+1)/2;

    return sum;
}

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >>n;

    int i=1;
    while(i<=n)
    {
        cout << "Triangle Number of " << i << " is " << Nth_Triangle(i) <<endl;
        i++;
    }

    return 0;
}
