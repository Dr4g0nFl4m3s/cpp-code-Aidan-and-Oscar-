#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(void)
{
    vector<int> v = {1, 2, 3};
    v.push_back(5);
    v.push_back(7);
    cout << v[0] << endl;
    for(int i = 0; i<v.size(); ++i)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    for(int x: v) cout << x << ' ';
    cout << endl;

    for(int x: v)
    {
        x+=10;
        cout << x << endl;
    }
    cout << v[0] << endl;
    for(int i = 0; i<v.size(); i++)
    {
        v[i] += 10;
        cout << v[i] << endl;
    }
    cout << v[0] << endl;
    return 0;
}