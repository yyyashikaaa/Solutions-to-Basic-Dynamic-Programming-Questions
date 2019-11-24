
#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

long DP[100];
std::vector<int> array;
long getMax(int length)
{
    if(length==array.size()) return 0;
    if(length>array.size()) return INT_MIN;

    if(DP[length]!=-1)  return DP[length];

    long res=0;
    for(int i=0; i<array.size(); i++)
    {
        res=std::max(res, array[i]+getMax(length+i+1));
    }
    return DP[length]=res;
}

int main()
{
    int t, n, temp;
    cin>>t;

    while(t--)
    {
        cin>>n;
        memset(DP, -1, sizeof(DP));
        array.clear();
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            array.push_back(temp);
        }
        cout<<getMax(0)<<endl;
    }
}
