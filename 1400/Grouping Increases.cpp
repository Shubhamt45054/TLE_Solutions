// https://codeforces.com/problemset/problem/1919/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

signed main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
 while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> a,b;
        int x=INT_MAX;
        int y=INT_MAX;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(y<x) swap(x,y);
            
            // cout<<x<<" "<<y<<" "<<cnt<<endl;
            if(arr[i]<=x) x=arr[i];
            else if(arr[i]>y){
                cnt++;
             x=arr[i];
         }
            else{
                y=arr[i];
            }
        }

        cout<<cnt<<endl;
}

}

