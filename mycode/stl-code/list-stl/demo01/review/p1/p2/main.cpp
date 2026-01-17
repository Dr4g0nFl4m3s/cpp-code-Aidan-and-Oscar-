#include<iostream>
using namespace std;

int main(void)
{
    int arr[3] = {1, 4, 1};
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;

    for(int x: arr)
    {
        cout << &x << endl;
    }

    for(int i = 0; i<3; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

