#include <iostream>
using namespace std;


int LessThan(int N1, int N2)
{
    if (N1<N2)
    {
        return N1;
    }

    else
    {
        return N2;
    }
}
int main()
{
    int N1, N2;
    cout << "Enter Two Numbers: " << endl;
    cin >>N1 >>N2;
    int save;
    save=LessThan(N1, N2);
    cout << save;

    return 0;
}
