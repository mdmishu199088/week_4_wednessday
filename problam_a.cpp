#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        deque<int>ans,v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            ans.push_back(x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        bool flag=false;
        while(n--){
            if(ans==v){
                flag=true;
            }
            else {
                int x=ans.front();
                ans.pop_front();
                ans.push_back(x);
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// ok
