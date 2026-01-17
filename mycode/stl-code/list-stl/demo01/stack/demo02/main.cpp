#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    queue<int> bus;
    stack<int> bar;
    bar.push(arr[0]);
    bar.push(arr[1]);
    bar.push(arr[2]);
    bar.push(arr[3]);
    bar.push(arr[4]);
    bus.push(bar.top());
    bar.pop();
    bus.push(bar.top());
    bar.pop();
    bus.push(bar.top());
    bar.pop();
    bus.push(bar.top());
    bar.pop();
    bus.push(bar.top());
    bar.pop();
    while(!bus.empty())
    {
        cout << "Ice cream for " << bus.front() << endl;
        bus.pop();
    }
    return 0;
}