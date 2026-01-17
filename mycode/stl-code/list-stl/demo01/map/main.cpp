#include<iostream>
#include<map>
using namespace std;

int main(void)
{
    map<int, string> m1;
    map<int, string> m2 = {
        {1, "UK"},
        {2, "USA"},
        {3, "CN"},
        {1, "Random"}
    };
    for(auto d: m2){
        cout << d.first << ' ' << d.second << endl;
    }
    m2.insert({4, "ABC"});
    for(auto d: m2) cout << d.first << ' ' << d.second << endl;
    cout << m2[2] << endl;
    cout << mt.at(2) << endl;
    m2[1] = "Japan";
    for(auto d: m2) cout << d.first << ' ' << d.second << endl;
    map<int, string>::iterator it = m2.find(2);
    if(it!=m2.end()) cout << it->first << ' ' << it->second << endl;
    else cout << "ELEMNT NOT FOUND" << endl;
    for(auto it = m2.begin(); it!=m2.end(); it++)
    {
        cout << it->first << ' ' << it->second << endl;
    }
    m2.erase(2);
    m2.erase(m2.begin());
    for(auto x: m2) cout << x.first << ' ' << x.second << endl;

    return 0;
}