#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(list<int> &l)
{
    for(const auto &x: l ) cout << x << ' ';
    cout << endl;
}

int main(void)
{
    list<int> l = {1, 2};
    print(l);
    l.push_back(3);
    print(l);
    l.push_front(4);
    print(l);

    auto it = l.begin();
    advance(it, 3);
    l.insert(it, 100);
    print(l);

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << *next(l.begin(), 2) << endl;

    *it = 333;
    print(l);

    auto it2 = find(l.begin(), l.end(), 1000);
    if(it2 != l.end()) cout << *it2 << endl;
    else cout << "Element not found" << endl;

    l.pop_back();
    print(l);
    l.pop_front();
    print(l);

    it = l.begin();
    advance(it, 1);
    l.erase(it);
    print(l);

    cout << l.size() << endl;
    cout << l.empty() << endl;

    

    return 0;
}