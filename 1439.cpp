#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int iN;
    while(1){
        bool imp = true;
        vector<int> v;
        cin>>iN;
        if(iN == 0)
            break;
        for(int i = 0; i < iN; i++){
            int iDat;
            cin>>iDat;
            v.push_back(iDat);
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < iN;i++){
            if(v[i+1]-v[i] > 200)
                imp = false;

        }
        int iNum = 1422 - v[v.size()-1];
        iNum*=2;
        if(iNum>200)
            imp = false;

        if(imp)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
}
    return 0;
}
