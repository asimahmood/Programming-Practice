#include <iostream>
using namespace std;

void Init()
{
    cout<<"Welcome to FALTU TAREEN Calculator by the TA's"<<endl;
    cout<<"Enter number 65536 to END program"<<endl;
}

float number ()
{
    float z;
    cout<<"Enter Any REAL Number: ";
    cin>>z;
    return z;
}

char operation()
{
    char a;

    cout<<"Enter Operation ( (D)ivide, (M)ul, Minu(s), (P)lus: ";
    cin>>a;

    while(1)
    {

        if(a=='D' || a=='d')
        {
            return '/';

        }


      else  if(a=='M' || a=='m')
        {
            return '*';

        }

        else if(a=='p' || a=='P');
        {
            return '+';

        }


         if(a=='s' || a=='S' )
        {
            return '-';

        }
        else
        {
              cout<<"Wrong Input...Enter Again!!!"<<endl;
              cout<<"Enter Operation ( (D)ivide, (M)ul, Minu(s), (P)lus: ";
              cin>>a;
        }




    }
}

float calculation(float k, float j, char op)
{
    float answer;
    if(k!=65536)
    {
        switch (op)
        {
        case '/':

        {
            answer=k/j;
            return answer;
        }
        case '*':
        {
            answer=k*j;
            return answer;

        }
        case '+':

        {
            answer=k+j;
            return answer;
        }
        case '-':

        {
            answer=k-j;
            return answer;
        }
        }
    }

}

void answer(float ans)
{
    cout<<"ANSWER: "<<ans<<endl;
}


int main()
{
    float operand1,operand2;
    char op='a';

    Init();

operand1=number();

    while(operand1!=65536)
    {
        operand2=number();
        op=operation();
        operand1=calculation(operand1,operand2,op);

        answer(operand1);
        operand1=number();
        operand2=number();


    }
    return 0;
}

