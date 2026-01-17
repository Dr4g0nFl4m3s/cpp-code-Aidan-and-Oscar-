#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    stack<char> stk;
    queue<char> q;
    for(char x: s)
    {
        stk.push(x);
        x++;
    }

    for(char x: s)
    {
        q.push(x);
        x++;
    }

   for(int i: s)
   {
    if(q.front() == stk.top())
    {
        q.pop();
        stk.pop();
    }
    else
    {
        cout << "not a palindrome" << endl;
        break;
    }
    i++;
   }
   if(stk.empty())
   {
    cout << "it is a palindrome" << endl;
   }


    return 0;
}