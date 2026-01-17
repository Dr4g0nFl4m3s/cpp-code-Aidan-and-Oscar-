#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(void)
{
    string s = "hello";
    stack<char> stk;
    queue<char> q;
    stk.push(s[0]);
    stk.push(s[1]);
    stk.push(s[2]);
    stk.push(s[3]);
    stk.push(s[4]);
    q.push(stk.top());
    stk.pop();
    q.push(stk.top());
    stk.pop();
    q.push(stk.top());
    stk.pop();
    q.push(stk.top());
    stk.pop();
    q.push(stk.top());
    stk.pop();
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}