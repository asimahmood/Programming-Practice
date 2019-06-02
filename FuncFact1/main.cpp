#include <iostream>
using namespace std;

double Fact_Func_1(int num)
{
    int fact=1;
    int i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;

        return fact;

    }

}
double nPr(int n, int r)
{
    return Fact_Func_1(n)/Fact_Func_1(n-r);
}

double nCr(int n, int r)
{
    return nPr(n, r)/Fact_Func_1(r);
}

int main()
{
    int n, r;
    cout<< "Two numbers n and r: ";
    cin>>n >>r;
    double nFact=Fact_Func_1(n);
    double n_rFact=Fact_Func_1(n-r);
    double rFact=Fact_Func_1(r);

    cout<<n <<"!= " <<nFact <<endl;
    cout<<r <<"!= " <<rFact <<endl;
    cout<<n <<"P"   <<r <<"= "<<nFact/n_rFact <<endl;
    cout<<n <<"C"   <<r <<"= "<<nFact/(n_rFact*rFact);
}
