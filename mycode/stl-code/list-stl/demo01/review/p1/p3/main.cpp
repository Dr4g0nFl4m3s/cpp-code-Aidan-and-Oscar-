#include<bits/stdc++.h>
using namespace std;

void increaseX(int x, int y)
{
    x++;
    cout << "Adress2: " << &x << endl;
    cout << "x inside the function" << x << endl;
}

void increaseX(int &x)
{
    x++;
    cout << "Adress2: " << &x << endl;
    cout << "x inside the function" << x << endl;
}

int main(void)
{
    /*int arr[3] = {1, 2, 3};
    vector<int> vct = {1, 2, 3};
    cout << arr << endl;
    cout << arr+1 << endl;
    cout << arr+2 << endl;

    cout << &vct[0] << endl;
    cout << &vct[1] << endl;
    cout << &vct[2] << endl;

    for(int i = 0; i<3; i++)
    {
        cout << &vct[i] << endl;
    }
    for(int i = 0; i<3; ++i)
    {
        cout << &vct[i] << endl;
    }
    for(int x: arr) cout << x << ' ';
    cout << endl;
    for(int i = 0; i<3; ++i)
    {
        cout << arr + i << ' ';
    }
    for(int x: arr) cout << &x << ' ';
    cout << endl; */

    int x = 1;
    cout << "Adress1: " << &x << endl;
    cout << "Value of x before calling the function: " << x << endl;
    increaseX(x);
    cout << "Value of x after calling the function: " << x << endl;
    cout << "Adress3: " << &x << endl;

    return 0;
}