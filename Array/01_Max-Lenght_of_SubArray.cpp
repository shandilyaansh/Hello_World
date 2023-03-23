#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int A[]={1,1,1,3,3,1,1,2,4,5};
    int n=10;
    int key;
    cin>>key;
    int right=0,left=0;
    ll sum=A[0];
    int maxLength=0;
    while(right<n){
        while(sum>key && left<=right){
            sum-=A[left];
            left++;
        }
        if(sum==key){
            maxLength=max(maxLength,(right-left+1));
        }
        right++;
        if(right<n){
            sum+=A[right];
        }
    }
    cout<<maxLength<<" ";
    return 0;
}