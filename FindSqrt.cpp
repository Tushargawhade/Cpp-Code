#include <iostream>
using namespace std;
int findSqrtroot(int n)
{

    int st = 0;

    int end = n;

    int mid = st + (end - st) / 2;
    int val = -1;

    while (st <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else if (mid * mid < n)
        {
            val = mid;
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }
    return val;
}
int main()
{

    int n = 16;

    int ans = findSqrtroot(n);

    cout << ans;
}