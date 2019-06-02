#include <iostream>

using namespace std;

int Fact_Func_3(int num)
{
    int fact=1;
    int i=1;
    while(i<=num)
    {
        fact*=i;
        i++;
    }
    return fact;
}

int main()
{
    int n, r;
    cout<< "Enter P and R: \n";
    cin>>n >>r;
    int nFact = Fact_Func_3(n);
    int n_rFact = Fact_Func_3(n-r);
    int rFact = Fact_Func_3(r);

    cout<<n <<"C" <<r <<"="<<nFact/(rFact*n_rFact) <<endl;
}
