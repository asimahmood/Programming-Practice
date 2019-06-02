#include <iostream>
using namespace std;

void Shape(int Height, char symb)
{
    for(int line=1; line<=Height; line++)
    {
        cout<< symb;
    }
}

void Triangle_1(int Height, char symb)
{
    for(int line=1; line<=Height; line++)
    {
        Shape(Height-line, ' ');
        Shape((2*line-1), symb);
        cout<< endl;

    }
}
void Triangle_2(int Height, char symb)
{
    for(int line=1; line<=Height; line++)
    {

        Shape(line-1, ' ');
        Shape(2*Height-(2*line-1), symb);

        cout<< endl;

    }
}
void Diamond(int Height, char symb)
{
    Triangle_1(Height, symb);
    for(int line=1; line<=Height-1; line++)
    {

        Shape(line, ' ');
        Shape(2*Height-(2*line+1), symb);

        cout<< endl;

    }
}
int main()
{
    char symb;
    int Height;
    cout<<"Enter any number: ";
    cin >> Height;
    cout << "Enter any character to print it: ";
    cin >> symb;

    Diamond(Height, symb);
}
