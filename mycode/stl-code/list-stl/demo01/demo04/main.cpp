#include<iostream>
using namespace std;

struct Node
{
    int v;
    int idx;
};

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 23, 67, 3, 0};
    struct Node list[6] = {
        {5, 3}, {4, 2}, {3, 7}, {8, 6}, {7, 5}, {5, -1}
    }
    return 0;
}