#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> vt;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vt.push_back(temp);
        sum += temp;
    }
    if (sum <= k)
    {
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << i + 1 << " ";
        cout << endl;
    }
    else
    {
        deque<int> temp;
        for (int i = 0; i < n; i++)
            temp.push_back(vt[i]);
        // map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[vt[i]] = i;
        // }
        sort(vt.begin(), vt.end());
        int i = 0;
        vector<int> index;
        while (k > 0 && i < n)
        {
            if (k >= vt[i])
            {
                k -= vt[i];
                index.push_back(find(temp.begin(), temp.end(), vt[i]) - temp.begin());
                *find(temp.begin(), temp.end(), vt[i]) = -1;
                i++;
            }
            else
            {
                break;
            }
        }
        cout << i << endl;
        for (int j = 0; j < i; j++)
        {
            cout << index[j] + 1 << " ";
        }
        // cout<<endl;
    }
}