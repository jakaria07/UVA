#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, m;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[10] = {0};
        for(int i = 1; i <= n; i++)
        {
            int b = i;
            while(b != 0)
            {
                m = b%10;
                a[m]++;
                b = b/10;
            }
        }

        for(int i = 0; i < 10; i++)
        {
            if(i == 9)
            {
                cout << a[i];
            }
            else
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
