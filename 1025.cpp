#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int iK;
    scanf("%d", &iK);
    vector<int> v;
    int iPersons;
    while(iK--)
    {
        scanf("%d", &iPersons);
        v.push_back(iPersons);
    }
    sort(v.begin(),v.end());
    int iReq = v.size()/2 + 1;
    printf("%d\n", iReq);
    int iSuma = 0;
    for(int i = 0; i < iReq; i++)
    {
        iSuma += v[i]/2+ 1;
    }
    printf("%d\n", iSuma);
}
