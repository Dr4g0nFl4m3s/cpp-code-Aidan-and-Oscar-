#include<iostream>
#include<utility>
#include<map>

using namespace std;

int main(void)
{
    map<int, string> data = {
        {1, "UK"}
    };
    pair<int, string> p1 = {1, "UK"};
    cout << p1.first << ' ' << p1.second << endl;
    pair<string, double> price = make_pair("Apple", 1.1);
    cout << price.first << ": " << price.second << "$" << endl;
    return 0;
}