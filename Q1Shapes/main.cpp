#include <iostream>

using namespace std;

void Shape(int Height, char symb)
{
    for(int shape=1; shape<=Height; shape++)
    {
        cout<<symb;

    }
}
void TriangleA(int Height, char symb)
{
    for (int line=1; line<=Height; line++)
    {
        Shape(line+1, symb);
        cout<<endl;
    }
}

void TriangleB(int Height, char symb)
{
    for (int line=1; line<=Height; line++)
    {
        Shape(Height-line+1, symb);
        cout<<endl;
    }
}

void TriangleC(int Height, char symb)
{
    for (int line=1; line<=Height; line++)
    {
        Shape(line-1, ' ');
        Shape(Height-line+1, symb);
        cout<<endl;
    }
}
void TriangleD(int Height, char symb)
{
    for (int line=1; line<=Height; line++)
    {
        Shape(Height-line, ' ');
        Shape(line, symb);
        cout<<endl;
    }
}

int main()
{
    int Height;
    char symb;
    cout << "Enter any number: ";
    cin >>Height;
    cout << "Enter any character to print it: ";
    cin >>symb;
    TriangleA(Height, symb);
    cout<< endl;
    TriangleB(Height, symb);
    cout<< endl;
    TriangleC(Height, symb);
    cout<< endl;
    TriangleD(Height, symb);
    cout<< endl;

    return 0;
}



