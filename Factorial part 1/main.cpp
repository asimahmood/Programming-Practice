#include <iostream>

using namespace std;

int main()
{
    double Num, Fact=1;
    cout<< "Enter Number:  ";
    cin>>Num;
    int i=1;
    while (i<=Num)
    {
        Fact=Fact*i;
        i++;
    }

    cout<<Num<<"! = "<<Fact;
    return 0;

}
