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
 
 
 
int main()
{
   boost;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w", stdout);
   #endif



   int t;
   cin >> t;
   ll test_case=t;
   while(t--){
      ll n;
      cin >> n;
      ll arr[n];
      for(int i=0;i<n;i++){
         cin >> arr[i];
      }
      sort(arr,arr+n);
      long long total = n/2;
    
      // long double rem =(arr[n-1]-arr[0])/total/1.0000;
      long double first= (arr[0]+arr[1])/2.0000000;
      long double last = (arr[n-2]+arr[n-1])/2.0000000;
      if(n==5){
        if(arr[2]-first<=abs(arr[2]-last)){
            first = (arr[0]+arr[1]+arr[2])/3.0000000;
        }
        else{
            last = (arr[2]+arr[3]+arr[4])/3.0000000;
        }
      }
      cout << fixed <<  setprecision(6) << "Case #" << test_case-t << ": "<<   last-first << endl;
   }
 return 0;
}