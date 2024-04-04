#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n= 100;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        int last = n %10;
        if(last == 1)
        {
            ans += last * pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout << ans;
}