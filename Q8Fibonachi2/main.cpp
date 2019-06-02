#include <iostream>

using namespace std;


int Fibonachi2(int n)
{
    int start=0;
    int last=1;
    int index=2;
    int k=last;

    if(n==0)
        return start;

    if(n==1)
        return last;

    while(index<=n)
    {
        k=last;
        last=start+last;
        start=k;
        index++;

    }
    return last;

}

int main()
{
    int n;
    int m;
    int F;

    cout << "How many Fibonacci numbers you want to ask?  " << endl;
    cin>>n;

    for(int k=1; k<=n; k++)
    {
        cin>>m;
        F=Fibonachi2(m);
        cout<<F <<"  is your Fibonacci number\n";
    }

    return 0;
}
