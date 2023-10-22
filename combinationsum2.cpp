#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vc vector<char>
#define vii vector<long long>
#define pb push_back
#define pp pop_back
#define sii set<ll>
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define pqa priority_queue<ll, vector<ll>, greater<ll>>
#define pqd priority_queue<ll, vector<ll>>

#define all(x) x.begin(), x.end()
#define cn cin
#define mpp make_pair
#define MOD 1000000007

void printVec(vector<vector<ll>> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void combinationSum(ll index, vii vec, ll k, vii &ds, vector<vector<ll>> &ans, ll sum)
{

    if (sum == k)
    {
        ans.pb(ds);
        return;
    }

    for (int i = index; i < vec.size(); i++)
    {

        if (vec[i] <= k - sum)
        {
            if (vec[i] == vec[i - 1] && index < i)
                continue;
            if(vec[i]>k - sum)break;
            if (index < i)
                index = i;
            ds.pb(vec[i]);
            combinationSum(index + 1, vec, k, ds, ans, sum + vec[i]);
            ds.pop_back();
        }
    }
}

vector<vector<ll>> solve(vii vec, ll k)
{
    vector<vector<ll>> ans;
    vii ds;
    combinationSum(0, vec, k, ds, ans, 0);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        vii vec;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vec.pb(x);
        }
        sort(vec.begin(), vec.end());
        vector<vector<ll>> ans = solve(vec, k);
        printVec(ans);
    }
    return 0;
}