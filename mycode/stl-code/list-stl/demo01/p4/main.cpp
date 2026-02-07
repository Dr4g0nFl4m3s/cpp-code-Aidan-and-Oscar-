#include<iostream>

using namespace std;

int fib(int n)
{
    cout << "*";
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

int main(void)
{
    for(int i = 0; i<=20; i++)
    {
        cout << "fib" << i << " : ";
        cout << fib(i);
        cout << endl;
    }
    return 0;
}