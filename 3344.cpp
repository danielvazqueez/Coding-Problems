#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for( int i = 1 ; i <= tests ; i++)
    {
        int suma = 0;
        vector <int> v;
        int numero;
        cin >> numero;
        for( int j = 0 ; j < 15; j++)
        {
            cin >> numero;
            v.push_back(numero);
        }
        for(int j = 1 ; j < v.size(); j++)
            if(v[j] - v[j-1] < 0)
                suma++;

        cout << i << " " << suma << endl;
    }
    return 0;
}
