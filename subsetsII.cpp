#include<bits/stdc++.h>
using namespace std;
#define           ll           long long int
#define           vc           vector<char>
#define           vii          vector<long long>
#define           pb           push_back
#define           pp           pop_back
#define           sii          set<ll>
#define           fr(i,a,b)    for(int i=a;i<b;i++)
#define           ff           first
#define           ss           second
#define           boost        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   
#define pqa  priority_queue<ll, vector<ll>, greater<ll>>
#define pqd  priority_queue<ll,vector<ll>>
   
#define  all(x)     x.begin(), x.end() 
#define   cn         cin 
#define mpp make_pair
#define MOD 1000000007

void PrintVec(vector<vector<ll>>vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
} 

vector<vector<ll>> finalSubset(ll index,vector<vector<ll>>&ans, vii arr,vii &ds){
    ans.pb(ds);
    for(int i=index;i<arr.size();i++){
        if(i!=index && arr[i]==arr[i-1]){
            continue;
        }
        ds.pb(arr[i]);
        finalSubset(index+1,ans,arr,ds);
        ds.pop_back();
    }
    return ans;
}

vector<vector<ll>> solve(vii arr,ll n){
    vector<vector<ll>>ans;
    vector<ll>ds;
    finalSubset(0,ans,arr,ds);
    return ans;
}
 
int main()
{
   int t;
   cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vii arr;
        for(int i=0;i<n;i++){
            ll x;cin >>x;
            arr.pb(x);
        }

        vector<vector<ll>> ans = solve(arr,n);
        PrintVec(ans);
    }
 return 0;
}