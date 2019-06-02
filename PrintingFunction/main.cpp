#include <iostream>

using namespace std;

void DigitTOString(int n)
{
    switch(n)
    {
    case 1:
        cout<< "one ";
        break;
    case 2:
        cout<< "Two ";
        break;
    case 3:
        cout<< "Three ";
        break;
    case 4:
        cout<< "Four ";
        break;
    case 5:
        cout<< "Five ";
        break;
    case 6:
        cout<< "Six ";
        break;
    case 7:
        cout<< "Seven ";
        break;
    case 8:
        cout<< "Eight ";
        break;
    case 9:
        cout<< "Nine ";
        break;
    case 0:
        cout<< "Zero ";
        break;
    }
}

int main()
{
    int num;
    cin>> num;

    int D0=num%10;
    num/=10;

    int D9=num%10;
    num/=10;

    int D8=num%10;
    num/=10;

    int D7=num%10;
    num/=10;

    int D6=num%10;
    num/=10;

    int D5=num%10;
    num/=10;

    int D4=num%10;
    num/=10;

    int D3=num%10;
    num/=10;

    int D2=num%10;
    num/=10;

    int D1=num%10;
    num/=10;

    DigitTOString(D1);
    DigitTOString(D2);
    DigitTOString(D3);
    DigitTOString(D4);
    DigitTOString(D5);
    DigitTOString(D6);
    DigitTOString(D7);
    DigitTOString(D8);
    DigitTOString(D9);
    DigitTOString(D0);

}
