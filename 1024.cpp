#include <iostream>

using namespace std;

int main()
{
    double n[300];
    n[0]= 1/(double)2;

    for(int i=1; i< 300; i++)
    {
        n[i] = n[i-1] + (1/((double)i+2));
    }

    double test;
    int cards;
    while ( cin >> test && test != 0.00)
    {
        for(int i = 0; i < 300; i++)
        {
            if( test > n[i])
                continue;
            else{
            cards = i+1;
                break;
            }

        }
        cout << cards << " card(s)" << endl;
    }
    return 0;
}
