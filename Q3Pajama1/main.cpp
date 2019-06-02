#include <iostream>
using namespace std;

void Shape(int Height, char symb)
{
    for (int shape=1; shape<=Height; shape++)
    {
        cout<<symb;
    }
}
void Pajama1(int Height, char symb)
{

    for (int line=1; line<=Height; line++)
    {
        Shape(Height-line+1,  symb);
        Shape(2*line-1,  ' ');
        Shape(line-Height,  ' ');
        Shape(Height-line+1, symb);
        cout<<endl;
    }
}
int main()
{
    int Height;
    char shape;
    cout << "Enter any number: ";
    cin >>Height;
    cout << "Enter any character to Print it: ";
    cin >>shape;
    cout << endl;
    Pajama1(Height, shape);

    return 0;
}
