 #include <iostream>

using namespace std;
int main()
{
    int Width, Height;
    cout << "Enter height: ";
    cin >> Height;
    cout << "Enter widht: ";
    cin >> Width;
    for ( int width = 1; width <= Height; width++ )
    {
        if ( width <= 1 )
            for ( int width = 1; width <= 
		Width; width++ )
            {
                cout << "*"; }
        else if ( width < Height )
        {
            cout << endl;
            for ( int wid2 = 1; wid2 <= Width; wid2++ )
            {
                if ( wid2 == 1 || wid2 == Width )
                    cout << "*";
                else
                    cout << " ";
            } }
        else {
        } }
    cout << endl;
    for( int wid3 = 1; wid3 <= Width; wid3++ )
    {
        cout << "*"; }
    
    cout << endl;
    return 0;
	 }
