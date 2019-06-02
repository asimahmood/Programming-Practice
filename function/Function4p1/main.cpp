#include <iostream>
using namespace std;

int xsize, ysize, *swape;
int row1, row2;

int interchange(int **matrix){
 // taking value corresponding to each cell from input

    cout << "Enter the matrix\n";

    for(int i = 0; i < ysize; i++) {

        for(int j = 0; j < xsize; j++) {

            cin >> matrix[i][j];

        }

    }

    cout << "Enter the rows to be interchanged : ";

    cin >> row1 >> row2;

    // interchanging the rows

    swape = matrix[row1 - 1];

    matrix[row1 - 1] = matrix[row2 - 1];

    matrix[row2 - 1] = swape;

    // printing the values

    cout << "New Matrix\n";

    for(int i = 0; i < ysize; i++) {

        for(int j = 0; j < xsize; j++) {

            cout << matrix[i][j] << " ";

        }

        cout << "\n";

    }


}

int main() {

    cout << "Enter the size of matrix : ";

    cin >> ysize >> xsize;

    int ** matrix = new int*[ysize];

    // initialising columns for each row

    for(int i = 0; i < ysize; i++) {

        matrix[i] = new int[xsize];

    }
//Function called
    interchange(matrix);

}

