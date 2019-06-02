#include <iostream>

using namespace std;
// it sort the array
void sort(float a[],float sz)
{

    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz-i; j++)
        {
            if(a[j]> a[j+1])
                swap (a[j], a[j+1]);
        }
    }
    for(int i=0; i<sz; i++)
    {
        cout<<" "<<a[i];

    }
}
int main()
{ float a[] = {8, 7, 6, 5, 4, 3, 2, 1};


float Sz= sizeof(a)/sizeof(float);
sort(a,Sz);
return 0;
}

