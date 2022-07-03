#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int even = 0, odd = 0;

        vector<long long int> v(2 * n), evenVec;

        for (long long int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even++;
                evenVec.push_back(v[i]);
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            cout << "0" << endl;
        }
        else if (odd > even)
        {
            long long int diff = (odd - even) / 2;
            cout << diff << endl;
        }
        else
        {
            long long int ans = 0;
            long long int diff = (even - odd) / 2;
            long long int tzx = 0;
            while (diff)
            {

                long long int count = 0;

                for (int i = 0; i < even; i++)
                {
                    if (evenVec[i] != 0)
                    {
                        evenVec[i] = evenVec[i] / 2;

                        if (evenVec[i] % 2 == 1)
                        {
                            count++;
                            evenVec[i] = 0;
                        }
                    }
                }

                tzx++;
                if (diff > count)
                {
                    ans += count * tzx;
                    diff = diff - count;
                }
                else
                {
                    ans += diff * tzx;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}