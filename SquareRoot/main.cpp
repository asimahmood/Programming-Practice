#include <iostream>
using namespace std;


int Square_Root(int n)
{
    int Counter=1;
    while(Counter<=n)
    {
        if ((Counter+1)*(Counter+1) > n)
        {
            return Counter;
        }

        Counter++;
    }

}


int main()
{
    int n;
    cout << "Enter number; " << endl;
    cin >> n;
    while(n!=-1)
    {
        int sqr=Square_Root(n);
        cout<< "square root of " <<n << " is: " <<sqr <<endl;
        cout << "Enter number; " << endl;
        cin >> n;

    }
    return 0;
}
