#include <iostream>
using namespace std;

void Shape(int Height, char symb)
{
    for (int shape=1; shape<=Height; shape++)
        cout<<symb;

}

void Pajama2(int Height, char symb)
{
    for (int line=1; line<=Height; line++)
    {
        //triangle
        Shape(line, symb);
        // pyramid
        Shape((2*Height)-(2*line-1),  ' ');
        // triangle
        Shape(line, symb);
        cout<<endl;
    }
}

int main()
{
    int Height;
    char shape;
    cout << "Enter any number: ";
    cin >>Height;
    cout << "Enter any character to print it: ";
    cin >>shape;
    cout << endl;
    Pajama2(Height, shape);
    return 0;
}
