// Problem 2047 B
// from Codeforces Round 990 (Div. 2)
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

/* As according to the question we need to do only one operation so we need to ensure that if there are more
then two diffrent chars we need to minimize permutation by using the given operation only once.

So the strategy to minimize permutation is to find the char with minimum freqeuncy and char with max freq
now we can say that the char with min freq is the one who is increasing the pemutation 
consider thiseg
 string s=abbccc
 we can apply the operation by choosing a and c and replacing a by c this approch attempts to minimize the permutation.
 Note that in case of n=1 or if the whole string has only 1 type of char (like s=aaaa )then the answer would be the string it self.
*/
signed main(){
    fasterr
    int tc;cin>>tc;
    while(tc--){
     int n;cin>>n;string s;cin>>s;
     if(n==1){cout<<s<<endl;continue;}//case of size=1
     set<char>ss;//set for checking if the string has only one type of char
     for(int i=0;i<n;i++){
        ss.insert(s[i]);
     }
     if(ss.size()==1){cout<<s<<endl;}//case of same chars
     else if(ss.size()==n&&(n!=1)){s[0]=s[1];cout<<s<<endl;}//case of all the diffrent chars eg s=abcde(for optimization)
     else{
        char a=s[0];
        char b=s[1];
        map<char,int>mp;//hash map for storing freq
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int min_freq=INT_MAX;
        int max_freq{};
        for(auto &i:mp){
            if(i.ss<min_freq){
                min_freq=i.ss;//finding minimum freq
                  a=i.ff; //storing the char with minimum freq
            }
            if(i.ss>max_freq){
                max_freq=i.ss;//finding max freq
                b=i.ff;      //storing the char with maximum freq
            }
        }
        if(min_freq==max_freq){
            //case if all the char have same freq then simply replce one by other
           for(auto &i:ss){
            if(i==a)continue;
            else b=i;
           }
        }
        for(int i=0;i<n;i++){
            if(a==s[i]){s[i]=b;break;}
            //if its not one of the corner case simply replace one of the element with the min freq with the
            // one of max freq  
        }
        cout<<s<<endl;
     }
    }
}