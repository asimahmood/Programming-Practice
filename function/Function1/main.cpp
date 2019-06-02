#include <iostream>

using namespace std;



const int size = 4;

void Delete(){
 int X;

    int array[size];

    int count = 1;

    for (int i = 0; i < size; i++)

    {

        cout << "Please enter " << count <<" integer: ";

        cin >> array[i];

        count++;

    }

    cout << "Enter X: ";

    cin >> X;



    for (int i = 0; i < size; i++)

    {

        if (X == array[i])

        {

            for (int j = i; j < size-1; j++)

                array[j] = array[j+1];

            array[size-1] = 0;

        }

    }

    for (int i = 0; i< size; i++)
            cout << array[i] << endl;
}

int main()

{
    //Function called
   Delete();

    return 0;

}
