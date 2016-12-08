#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> epi;
    int iEpisodios;
    cin >> iEpisodios;
    int iCapitulos;
    cin >> iCapitulos;
    int iPos;
    for(int i = 0; i < iCapitulos; i++)
    {
        cin>> iPos;
        epi.insert(iPos);
    }
    cout << iEpisodios - epi.size() << endl;

}
