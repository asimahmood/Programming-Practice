#include <iostream>
using namespace std;

void Shape(int Height, char symb)
{
    for (int shape=1; shape<=Height; shape++)
    {
        cout<<symb;
    }
}
void Pajama(int Height, char symb)
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
    char symb;
    int Height;
    cout<<"Enter any number: ";
    cin>>Height;
    cout<<"Enter any character to print it: ";
    cin>>symb;
    cout<<endl;
    Pajama(Height, symb);
    Pajama2(Height,symb);
    return 0;
}
