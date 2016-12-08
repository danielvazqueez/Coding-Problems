#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iN,iSuma = 0;
    for (int i = 0; i< 30 ; i++)
    {
        cin >> iN;
        iSuma += iN;
    }
    cout << fixed << setprecision(3) << iSuma+iSuma/30.0 << endl;

    return 0;
}
