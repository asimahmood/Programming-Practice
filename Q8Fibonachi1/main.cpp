#include <iostream>

using namespace std;
void Fibonachi(int n)
{
    int start=0;
    int last=1;
    int index=2;
    int k=last;

    if(n>=0)
        cout<<start<<" ";

    if(n>=1)
        cout<<last<<" ";

    while(index<=n)
    {
        k=last;
        last=start+last;
        start=k;
        index++;
        cout<<last<<" ";
    }

}

int main()
{
    int n;
    cout << "Enter any Index to find Fibonacci numbers: \n";
    cin>>n;
    Fibonachi(n);
    return 0;
}
