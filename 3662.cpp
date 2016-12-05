#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool Perfect;
    int x;
    while(cin >> x && x != -1)
    {
        int suma = 0;
        vector <int> v;
        for(int i = 1; i < x; i++)
            if(x%i == 0)
            {
                suma+= i;
                v.push_back(i);
            }

        if(suma == x)
        {
            cout << x << " = ";
            for(int i = 0; i < v.size(); i++)
                if(i == v.size()-1)
                    cout << v[i] << endl;
                else
                    cout << v[i] << " + ";
        }
        else{
            cout << x << " is NOT perfect." << endl;
        }
    }
}
