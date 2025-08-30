#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> v = {1, 2, 4, 56, 6};
    for(int x: v)
    {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}