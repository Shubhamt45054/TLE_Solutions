// https://codeforces.com/problemset/problem/1931/E

#include <bits/stdc++.h>
using namespace std;

void pll(vector<long long> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int total=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int cnt=0;
            while(arr[i]%10==0){
                total++;
                cnt++;
                arr[i]/=10;
            }
            if(cnt!=0)
            pq.push(cnt);
            while(arr[i]){
                total++;
                arr[i]/=10;
            }
        }
        int power=0;
        while(!pq.empty() ){
            power+=pq.top();
            pq.pop();
            if(!pq.empty())pq.pop();
        }
        int hai=total-power;
        // cout<<hai<<endl;
        if(hai>m) cout<<"Sasha\n";
        else cout<<"Anna\n";
    }
    return 0;
}

