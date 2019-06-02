#include <iostream>
using namespace std;

bool IsEven(int n)
{
    bool check;
    if(n%2==0)
    {
        check = true;
    }
    if(n%2!=0)
    {
        check = false;
    }
    return check;
}
int main()
{
    int n;
    int Even_Counter=0, Odd_Counter=0, sum=0;
    do
    {
        bool check;
        cin>> n;
        if(IsEven(n)==true)
        {
            Even_Counter++;

        }
        if(IsEven(n)==false)
        {
            Odd_Counter++;
        }
        sum=sum+Even_Counter;
    }
    while(n!=-1);
    {
        cout <<Even_Counter <<":  Times entered Even number" <<" and sum: "<<sum<<endl;
        cout <<Odd_Counter <<":  Times entered Odd number" <<endl;
    }
}
