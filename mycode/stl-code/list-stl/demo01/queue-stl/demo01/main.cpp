#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;

    queue<int> temp(q);
    while(!temp.empty())
    {
        cout << temp.front() << ' ';
        temp.pop();
    }
    cout << endl;

    cout << q.size() << endl;

    return 0;
}
