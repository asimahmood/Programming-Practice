#include <iostream>

using namespace std;

void alldevisor(int N)
{
    int n=N/2,W;
    do
    {

        W=N%n;
        if(W==0&&n>1)
        {
            float i,q,k;
            int j=n/2;
            do
            {
                q=j;
                i=n%j;
                j=j-1;

            }
            while(i!=0);
            k=q;
            if(k==1)
                cout<<n<<"\n";
            n=n-1;
        }
        else
        {
            n=n-1;
        }
    }
    while(n>=1);
}

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin>>num;
    alldevisor(num);

}
