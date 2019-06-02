#include<iostream>
using namespace std;

int const n = 10;
int ar[n],i,j,counter;
int x = 0;

int Prime_number(int ar[]){


    for(i=0;i<n;i++)

    {

        counter=0;

        for(j=2;j<ar[i];j++)

        {

            if(ar[i]%j==0)

            {

                counter=1;

                break;

            }

        }

        if(counter==0)

        {

            cout << ar[i] << "\t" ;

            x++;

        }

    }



    cout << endl;

    cout <<"Total of "<< x << " prime numbers found in the array." << endl;

}
int main()

{
    int element = 1;



    for( i=0;i<n;i++)

    {

        cout <<"Enter the " << element <<" elements array: ";

        cin >> ar[i];

        element++;

    }



    cout << "Your array is: ";



    for( i=0;i<n;i++)

    {

        cout<<ar[i] << "\t";

    }

    cout << endl;

    cout <<"All the prime numbers in the array are: ";
    //Function called
    Prime_number(ar);


}
