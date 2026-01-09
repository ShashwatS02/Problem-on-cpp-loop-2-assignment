#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>

void solve() {
    int n; cin>>n;
    string a,b; cin>>a>>b;
    
    bool same = true;
    for(int i=0; i<n; i++) {
        if((a[i]==b[i]) != (a[0]==b[0])) {
            same = false; break;
        }
    }
    if(!same) {
        cout<<"NO\n"; return;
    }
    
    vector<pii> ops;
    int cnt1 = 0;
    for(int i=0; i<n; i++) if(a[i]=='1') {
        ops.push_back({i+1,i+1});
        cnt1++;
    }
    
    bool need_fix = (a[0]==b[0]) ? (cnt1%2) : (cnt1%2==0);
    if(need_fix && n>=2) {
        ops.push_back({1,1});
        ops.push_back({2,n});
        ops.push_back({1,n});
    }
    
    cout<<"YES\n";
    cout<<ops.size()<<'\n';
    for(int i=0; i<ops.size(); i++) {
        cout<<ops[i].first<<" "<<ops[i].second<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
