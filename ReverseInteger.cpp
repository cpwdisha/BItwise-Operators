#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //reverse an integer and make sure it fall within the the range of an integer which is [-2^31 to 2^31-1]
    int n;
    cin >> n;
    int answer = 0;
    while(n!=0)
    {
        int last = n%10;
        if(answer > (INT_MAX/10) || answer < (INT_MIN/10))
        {
            cout << "Outside signed 32-bit range";
            return 0;
        }
        answer = (answer*10) + last;
        n = n/10;

    }
return 0;

}
