#include <iostream>
using namespace std;

int const size = 10;
int temp;

void D_sort(int num[]){
    for(int i=0; i<size; i++)

    {

        for(int j=i+1; j<size; j++)

        {

            if(num[i]<num[j])

            {

                temp=num[j];

                num[j]=num[i];

                num[i]=temp;

            }

        }

        cout << num[i] << "\t";

    }

    cout << endl;
}

int main ()

{

    int num[size]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "-----Descending array Sorting-----"<<endl;
    //Function called
    D_sort(num);
    return 0;

}
