//Problem  2042-A
// from Educational Codeforces Round 172 (Rated for Div. 2)
// <3------------------------------------------------@56philic------------------------------------------------>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define cin(v) for(int i=0;i<v.size();i++)cin>>v[i];
#define cout(v) for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
#define all(v) v.begin(),v.end()
#define qsort(v) sort(v.begin(),v.end())
#define fasterr (ios_base::sync_with_stdio(false),cin.tie(NULL));
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define flush cout<<flush
#define gcd __gcd
#define pb push_back
#define lcm(a,b) ((a/(__gcd(a,b)))*b)
const int MOD=1e9+7;

/*Shree Radhe*/
signed main(){
    fasterr
    int tc;cin>>tc;
    while(tc--){
     int n,k;cin>>n>>k;
     vector<int>v(n);
     cin(v);
     bool flag{};
     qsort(v);reverse(all(v));//greedy strategy so that the coins we need to add is minimum()
     for(int i=0;i<n;i++){
        if(v[i]==k){flag=true;}
     }
     if(flag){cout<<0<<endl;continue;}//if k is found already in the array then he can directly pickup the chest with k coins
     bool dont=true;
     for(int i=0;i<n;i++){
        if(k<v[i])break;//check if the next chest has more coins then k so instead of picking up the chest with more number of coins we can add k coins to previous chest(note that k was decreased on every iteration)
        k-=v[i];
        if(k==0){
           dont=false; cout<<0<<endl;break;//if sum of some elements in array =k then we dont need to add coins and we have already sorted the array as he picks up chest greedily 
        }
     }
    if(dont){ cout<<k<<endl;}//print the minimum number of coins needed
     
    }
}
 