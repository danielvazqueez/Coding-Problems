#include <iostream>

using namespace std;

int main()
{
    string frase,frase2;
    getline(cin,frase);
    frase2= frase;
    for(int i = 0 ; i < frase.size(); i++)
        frase2[i] = toupper(frase[i]);
    if(frase2 == "KROKETTEN")
    {
        cout << "croqueta" << endl;
        return 0;
    }

    if(frase2.substr(0,10) == "KROKETTEN ")
    {
        frase.erase(0,9);
        frase2.erase(0,9);
        frase = "croqueta" + frase;
        frase2 = "croqueta" + frase2;
    }
    while(frase2.find(" KROKETTEN ") != -1)
    {
        string primerparte;
        string segundaparte;
        int iPos = frase2.find(" KROKETTEN ");
        frase.erase(iPos+1,9);
        frase2.erase(iPos+1,9);
        primerparte = frase.substr(0,iPos+1);
        segundaparte = frase.substr(iPos+1,frase.size()-iPos);
        frase = primerparte + "croqueta" + segundaparte;
        primerparte = frase2.substr(0,iPos+1);
        segundaparte = frase2.substr(iPos+1,frase2.size()-iPos);
        frase2 = primerparte + "croqueta" + segundaparte;
    }
    if(frase2.size() > 9)
    {
        if (frase2.substr(frase2.size()-10,10) == " KROKETTEN")
        {
            frase.erase(frase.size()-9,9);
            frase = frase + "croqueta";
        }
    }

    cout << frase << endl;

}
