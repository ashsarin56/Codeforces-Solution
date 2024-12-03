//Problem 2047 C
// from->Codeforces Round 990 (Div. 2)
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
    /*
we need to figure out the path with maximum cost so considering the maximum of first and second element 
from each pair and walking through it ensuring that we are not switching rows from the wrong cell or from 
same cell and ensuring that we are switching it only once..
    */
    fasterr
    int tc;cin>>tc;
    while(tc--){
     int n;cin>>n;
     int arr[2][n];
     vector<pair<int,int>>v;
     for(int i{};i<2;i++){
        for(int j{};j<n;j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0;i<n;i++){
        v.pb(make_pair(arr[0][i],arr[1][i]));
     }
     int sum{};int ctr{};int maxx=INT_MIN;
     for(auto &i:v){
       sum+=max(i.ff,i.ss);
       maxx=max(maxx,min(i.ff,i.ss));
    // cout<<i.ff<<" "<<i.ss<<endl;
     }
      cout<<sum+maxx<<endl;
    }
}
 