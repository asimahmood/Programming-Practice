#include<iostream>
#include<fstream>
using namespace std;

void Reverse(){
    int n = 0;

    int arr[100];

    int temp[100], j, i;
    ifstream inFile ("file.txt");



    while(!inFile.eof())

    {

        inFile >> arr[n];

        n++;

    }

    //Reversing an array

    for(i=n-1, j=0; i>=0; i--, j++)

    {

        temp[i]=arr[j];

    }


    for(i=0; i<n ;i++)

    {

        cout<<temp[i]<<endl;

    }



    inFile.close();

}

int main()

{
    //Function called
    Reverse();
    return 0;

}
