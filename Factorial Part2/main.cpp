#include <iostream>

using namespace std;

int main()
{
    int n, r, nFact=1, rFact=1, n_rFact=1, nPr, nCr;
    cout<< "N  R" << endl;
    cin>>n >>r;
    int i=1;
    while(i<=n)
    {
        nFact*=i;
        i++;
    }
    i=1;
    while(i<=(n-r))
    {
        n_rFact*=i;
        i++;
    }
    i=1;
    while(i<=r)
    {
        rFact*=i;
        i++;
    }
    cout<<n <<"!= " <<nFact <<endl;
    cout<<r <<"!= " <<rFact <<endl;
    cout<<n <<"P"   <<r <<"= "<<nFact/n_rFact <<endl;
    cout<<n <<"C"   <<r <<"= "<<nFact/(n_rFact*rFact);

    return 0;
}
