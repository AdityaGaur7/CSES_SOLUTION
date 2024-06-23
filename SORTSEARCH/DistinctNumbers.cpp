// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vv(v)        vector<int>v
#define vvll(v)      vector<long long>v
#define vp(x)      v.push_back(x)
#define len(s)     (int)s.size()
#define mp(x,y)    make_ pair(x,y)
#define vpair      vector<pair<int,int>>vp
#define sort(a)    sort(a.begin(),a.end())
#define rev(a)     reverse(a.begin(),a.end())
#define r(i,a,b)   for ( int i = a; i< b; i++)
#define feach(a)   for(auto x: a)cout<<x<<" "
#define print(x)   cout<<x<<endl
#define tc         int t;cin>>t;while(t--)
#define maxi(arr)  *max_element(arr.begin(),arr.end())
#define mini(arr)  *min_element(arr.begin(),arr.end())
#define ll         long long 
#define mod        1000000007
#define lwr        transform(s.begin(), s.end(), s.begin(), ::tolower);
bool iss(const string& x, const string& s) {
    size_t pos = x.find(s);
    return pos != string::npos;
}





void solve(){
 int n ;
 cin>>n;

 set<int>s;

 for (int i = 0; i < n; i++)
 {
    int x;
    cin>>x;
    s.insert(x);
    
 }
cout<<s.size();
 
  
  }

int main(){
   solve();
    return 0;
}
