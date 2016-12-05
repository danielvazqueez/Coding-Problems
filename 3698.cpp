#include <iostream>

using namespace std;

int main()
{
    string palabra;
    int numero;
    cin >> numero;
    cin >> palabra;
    int may = 0;
    for(int i=0 ; i < numero; i++)
    {
        int code = palabra[i];
        if(code < 91)
        may++;
    }
    cout << may << " " << numero-may << endl;
}
