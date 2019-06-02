#include <iostream>
using namespace std;

void Fibonachi3(int n)
{
    int start=0;
    int last=1;
    int index=2;
    int k=last;
    int L;

    if(n>=1)
    cout<<start<<" ";

    if(n>=2)
    cout<<last<<" ";

    while(k<n)
    {
        L=last;
        last=start+last;

        start=L;

        cout<<last<<"\t";
        k=start+last;
    }

}

int main()
{
    int n;
    cout << "Enter any Number but, it will print Fibonacci number less than the give number  " << endl;
    cin>>n;
    Fibonachi3(n);
    return 0;
}
