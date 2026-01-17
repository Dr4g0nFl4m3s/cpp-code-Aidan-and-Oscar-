#include<iostream>
#include<set>
using namespace std;

int main(void)
{
    set<int> s = {1, 2, 3, 2, 2, 1, 4};
    for(auto x: s) cout << x << ' ';
    cout << endl;
    s.insert(10);
    s.insert(3);
    for(int x: s) cout << x << ' ';
    cout << endl;
    set<int>::iterator it = s.find(1);
    if(it!=s.end()) cout << "Elememt found " << *it << endl;
    else cout << "Element does not exist in the set " << endl;
    if(s.count(1)) cout << "Element found" << endl;
    else cout << "Element not found" << endl;
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    s.erase(1);
    s.erase(s.begin());
    for(int x: s) cout << x << ' ';
    cout << endl;
    cout << s.size() << endl;
    return 0;
}