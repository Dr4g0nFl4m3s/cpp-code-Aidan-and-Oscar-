#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int n = 0;
    cout << ("enter number of disks") << endl;
    cin >> n;
    int moves = pow(2, n)-1;
    cout << moves << endl;
    return 0;
}