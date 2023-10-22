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
 
void printVec(vector<ll>vec){
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " " ;
    }
    cout << endl;
}

void recursion(ll arr[],ll index, ll sum, ll n,vii vec,ll curr,ll i){
    if(index==n){
        printVec(vec);
        index--;
        return;
    }
    if(i!=index && arr[index]!=curr){
        vec.pb(arr[index]);
        i++; 
        curr = arr[index];
    }
    
    recursion(arr,index+1,sum+=arr[index],n,vec,curr,i);
    vec.pop_back();
    recursion(arr,index+1, sum,n,vec,curr,i);
}

void solve(ll arr[],ll n){
    vii vec;
    recursion(arr,0,0,n,vec,0,0);
}
 
int main()
{
   int t;
   cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        solve(arr,n);        
        sort(arr,arr+n);
    }
 return 0;
}