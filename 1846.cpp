#include <iostream>

using namespace std;

int main()
{

    int iN, iS,iSuma, iNumeros[211];
    cin >> iN >> iS;
    iSuma = iN*(iN+1)/2;
    iNumeros[0] = iS;
    for(int i = 1; i < iSuma; i++)
    {
        iNumeros[i] = iNumeros[i-1]+1;
        if(iNumeros[i] == 10)
            iNumeros[i] = 1;
    }
    int iPosicion = 0, iL = iN;
    for(int i = 1; i <= iN ; i++)
    {
        for(int j = 1; j < i; j++)
            cout << "  ";
    int iContador = i;
    for(int i = iPosicion, j = 0; j < iL;)
    {
        cout << iNumeros[i] << " ";
        i = i + iContador;
        iContador++;
        j++;
    }
    cout << endl;
    iPosicion += (i+1);
    iL--;
    }
    return 0;
}
