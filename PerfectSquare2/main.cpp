#include <iostream>
using namespace std;


bool Is_Perfect_Sqr(int n)
{
    int Counter=1;
    while(Counter<=n)
    {
        if (Counter*Counter == n)
        {
            return true;
        }

        Counter++;
    }

    return false;

}
int main()
{
    int n;
    cout << "Enter number; " << endl;
    cin >> n;
    while(n!=-1)
    {
        bool check=true;
        check=Is_Perfect_Sqr(n);
        if(check==true)
        {
            cout<< "Perfect Square" <<endl;
        }
        else
        {
            cout<< "Not Perfect Square" <<endl;
        }
            cout << "Enter number; " << endl;
            cin >> n;

    }
    return 0;
}
