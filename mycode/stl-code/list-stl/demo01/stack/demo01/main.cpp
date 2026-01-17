#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void)
{
  /*  stack<int> stk;
    stk.push(1);
    stk.push(2);
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    stk.push(1);
    stk.push(4);
    stk.push(5);
    stk.push(9);
    cout << stk.top() << endl;
    //for(int x: stk)
   // {
   //     cout << x << ' ';
   // }
   // cout << endl;
   while(!stk.empty())
   {
    cout << stk.top() << endl;
    stk.pop();
   }
*/
   queue<int> q;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(9);
    queue<int> temp(q);
    while(!temp.empty())
    {
        cout << temp.front() << ' ';
        temp.pop();
    }
    cout << endl;

    return 0;
}