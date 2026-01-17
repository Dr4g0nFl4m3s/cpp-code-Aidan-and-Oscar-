#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(void)
{
    list<int> l1;
    list<int> l2 = {1, 2, 4, 5, 6, 6};
    list<int> l3(3, 1);
    vector<int> v1 = {1, 2, 4, 5, 6, 6};
    cout << v1[1] << endl;
    for(int i = 0; i<v1; i++)
    {
        cout << v1.at(i) << endl;
    }
    for(const auto &i: l3)
    {
        cout << i << ' ';
    }
    cout << endl;
    l1.push_back(1);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_front(7);
    for(int x: l1) cout << x << ' ';
    cout << endl;
    for(list<int>::iterator it = l1.begin(); it!=l1.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    return 0;
}