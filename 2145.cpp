#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int iT;
    cin>>iT;
    for(int i=1;i<=iT;i++){
        vector<int> v;
        int score=0;
        int cal;
        int jueces=10;
        while(jueces--){
            cin>>cal;
            v.push_back(cal);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<9;i++){
            score+=v[i];
        }
       cout<<i<<" "<<score<<endl;
    }
}
