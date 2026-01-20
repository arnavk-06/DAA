#include<iostream>
#include<algorithm>
using namespace std;
int maxCrossingSum(int arr[], int p, int m, int q){
    int sum=0;
    int maxmidL=0;
    for (int i=m;i>=p;i--){
        sum+=arr[i];
        maxmidL=max(maxmidL, sum);
    }
    sum=0;
    int maxmidR=0;
    for (int i=m+1;i<=q;i++){
        sum+=arr[i];
        maxmidR=max(maxmidR, sum);
    }
    return maxmidL+maxmidR;
}
int maxsum(int arr[], int p, int q){
    if (p==q)
    return max(arr[p], 0);
    int m=(p+q)/2;
    int maxL=maxsum(arr,p,m);
    int maxR=maxsum(arr,m+1,q);
    int maxmid=maxCrossingSum(arr,p,m,q);
    return max({maxL,maxR,maxmid});
}
int main(){
    int arr[]={-2,-5,6,-2,-3,1,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxsum(arr,0,n-1);
    cout<<"Max Subarray Sum = "<<result<<endl;
    return 0;
}