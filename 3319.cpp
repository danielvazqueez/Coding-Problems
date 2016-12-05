#include <iostream>

using namespace std;

int main()
{
    int iTests;
    cin >> iTests;
    for(int i = 0; i < iTests; i++)
    {
        bool primero = true;
        long long int numero;
        cin >> numero;
        for( int j = numero ; j > 0; j--)
        {
            if(j == 1 || j == 2 || j == 3 || j == 5 || j == 7 ||
               j == 11 || j == 13 || j == 17 || j == 19 || j== 23 ||
               j == 29 || j == 31 || j == 37 || j == 41 ||
               j == 43 || j == 47)
               {
                    if( primero)
                    {
                        numero = j;
                        primero = false;
                    }
                    else
                        numero*= j;
               }
        }
        cout << numero << endl;
    }
}
