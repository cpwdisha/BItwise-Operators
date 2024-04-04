#include <iostream>
using namespace std;
int main()
{
    int n=34;
    if(n==0)
    {
        return 1;
    }
    int temp = n;
    int mask = 0;

    while(temp!=0)
    {
    temp = temp>>1;
    mask = (mask << 1)|1;
    }
    int comp;
    comp = n ^ mask;
    cout << comp;
}