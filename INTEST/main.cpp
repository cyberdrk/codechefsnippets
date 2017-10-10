#include <iostream>

using namespace std;

int main()
{
    unsigned long int n,k, i;
    int j, cnt = 0;
    cin >> n >> k;
    for (j = 0; j < n; j++)
    {
        cin >> i;
        if ( i % k == 0)
            cnt ++;
    }
    cout << cnt;
    return 0;
}
