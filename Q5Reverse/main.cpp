#include <iostream>
using namespace std;

int Reverse(int N)
{
   int y=0, x=N;

   while(!(x<1))
   {
       y=y+(x%10);
       //y=y*10;
       x=x/10;
   }
   y=y/10;
   return y;
}
int main()
{
    int N;
    cout<<"Enter at least two Number without space to reverse it: \n";
    cin>>N;
    cout<<"\nReverse of the Number\n";
    cout<<Reverse(N)<<"\n";
    return 0;
}
