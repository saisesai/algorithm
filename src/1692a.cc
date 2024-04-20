#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int k = 0; k < t; k++)
    {
        int ans(0);
        vector<int> a(4);

        for(int i = 0; i < 4; i++)
            cin >> a[i];

        for(int i = 1; i < 4; i++)
        {
            if(a[0] < a[i])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
