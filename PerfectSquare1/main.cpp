#include <iostream>
using namespace std;


bool Is_Perfect_Sqr(int n)
{
    int half=n/2;
    while(half>=1)
    {
        if (half*half == n)
        {
            return true;
        }

        half--;
    }

    return false;

}
int main()
{
    int x;
    cout << "Enter number; " << endl;
    cin >> x;
    bool check=true;

    check=Is_Perfect_Sqr(x);
    if(check==true)
    {
        cout<< "Perfect Square";
    }
    else
    {
        cout<< "Not Perfect Square";
    }
    return 0;
}
