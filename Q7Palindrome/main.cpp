#include <iostream>

using namespace std;

void Palindrome(int n)
{
    int m=0,K=n;
    while(n>10)
    {
        m=m+(n%10);
        m=m*10;
        n=n/10;
    }
    m=m+n;
    if(m==K)
    {
        cout<<"it is palindrome";
    }
    else
    {
        cout<<"it is not a palindrome";
    }

}
int main()
{
    int n;
    cout << "Enter Palindrome numbers: \n";
    cin>>n;
    Palindrome(n);
    return 0;
}
