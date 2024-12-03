//Problem  2042-B
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
      // As given in the question you get 2 points for each type of colored ball only if you have collected all
      // the ball of that color else you will get 1 point independent of how many balls yo have of the sane color
      //so the optimal way for alice is to pickup that type of ball whose frequency is 1 
      //(eg in the array {1 2 2 3} alice can pick 1 then bob will pickup 3 so that alice can not get anyfurther 2 points )
      //so to conclude first we need to count the colored ball with freq=1 and (2*ceil(freq/2)) points will be given to alice and then 1 point for each colored ball whose freq is moe then 1.(beacuse bob will always try that alice is unable to pickup all same colored balls)
      int n;cin>>n;
      vector<int>v(n);cin(v);
      map<int,int>mp;//map for storing freq
      for(int i=0;i<n;i++){
        mp[v[i]]++; //making hash map
      }
      int score{};
      double ctr{}; //storing in double so that ceil function can be used
      for(auto &i:mp){
        if(i.ss==1)ctr++; //counting number colored ball with freq 1
        else score++;// counting the number of colored ball with freq more then 1 and directly giving 1 point to alice.
      }
      int add=(2*(ceil(ctr/2)));//giving 2 points for half of the elements with freq=1 
      //note that if the elements with freq=1 is odd then alice wil get more number of elements with freq 1 
      //as he always play first
      cout<<setprecision(0)<<fixed<<score+add<<endl;//ensuring the output format is correct by using fixed and setprecision(0).
    }
}
 