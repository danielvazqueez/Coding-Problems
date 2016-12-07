#include <iostream>

using namespace std;

int main()
{
    int iN;
    cin >> iN;
    for(int i = 0 ; i< iN; i++)
    {
        string sNumber;
        cin >> sNumber;
        char ult = sNumber[sNumber.size()-1];
        cout << ult << endl;
        if(ult == '0' || ult == '2' || ult == '4'|| ult == '6'
           || ult == '8')
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
}
