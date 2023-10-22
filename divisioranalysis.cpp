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
 
ll binpow(ll x, ll y){
    ll a =1;
    while(y>0){
        if(y&1){
            a= (a*x)%MOD;
        }
        x= (x*x)%MOD;
        y=y>>1;
    }
    return a;
    
}

 
int main()
{
   int t;
   t=1;
    while(t--){
        ll n;cin >> n;
        vector<pair<ll,ll>>vec;
        for(int i=0;i<n;i++){
            ll x,y;
            cin >> x >> y;
            vec.pb(mpp(x,y));
        }
        ll sum=1,product=1,num=1;
        for(int i=0;i<n;i++){
            ll val = vec[i].second;
            num*=(val+1);
            num%=MOD;
        }
        ll carry
        for(int i=0;i<n;i++){
            
            ll first = vec[i].first;
            ll second= vec[i].second;
            ll val=binpow(first,second+1);
            

        }
        for(int i=0;i<n;i++){
            product  = binpow(vec[i].first,num/2);

        }
        cout << num << " " << sum << " " << product << endl;

        
    }
 return 0;
}