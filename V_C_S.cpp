#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[m],b[k];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        int count =0,count1=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                if(a[i]==b[j]){
                    count+=1;
                }
            }
        }
        count1 = n+count-m-k;
        cout<<count<<" "<<count1<<endl;
    }
}