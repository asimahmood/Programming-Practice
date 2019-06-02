#include <iostream>
using namespace std;


bool Maxi_Mini(int N1, int N2)
{

    if(N1>N2)
    {
        return true;

    }

    else
    {
        return false;
    }

}

int main()
{

    bool check=true;
    int n;
    int maxi, mini;
    cout << "Enter Numbers: " << endl;
    cin >> n;
    maxi=n;
    mini=n;
    while(n!=-1)
    {
        cin >>n;
        if(n!=-1)
        {
            check=Maxi_Mini(maxi, n);
            if (check==false)
            {
                maxi=n;
            }

            check=Maxi_Mini(mini, n);
            if(check==true)
            {
                mini=n;
            }
        }
    }

    cout << "Minimum numbers are: " <<mini <<endl;
    cout << "Maximum numbers are: " <<maxi <<endl;

    return 0;
}
