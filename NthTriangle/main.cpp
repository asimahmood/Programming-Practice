#include <iostream>
using namespace std;

int Nth_Triangle(int N)
{
    int sum=0;


    sum=N*(N+1)/2;
//    while(N>=1)
//    {
//        sum=sum+N;
//
//        N--;
//    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >>n;
    int output=0;
    output=Nth_Triangle(n);
    cout << output <<endl;
    return 0;
}
