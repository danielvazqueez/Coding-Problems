#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> n;
    string s;
    cin >> s;
    int length;
    length = s.length();
    for(int i=0; i < length; i++)
    {
        if(s[i] == '+')
            continue;

        n.push_back((s[i]-'0'));
    }

    sort(n.begin(),n.end());
    for(int i=0; i < n.size(); i++)
    {
        if(i == n.size()-1)
        {
            cout << n[i];
            continue;
        }

        cout << n[i] << "+";
    }
    cout << "\n";
    return 0;
}
