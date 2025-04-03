#include<vector>
#include<iostream>
using namespace std;
int aizenscore_max(int arr[],int l,int r,vector<vector<int>> &memo){
    if(l>=r) return 0;
    if(memo[l][r]!=-1) return memo[l][r];
int start = arr[l] + min(aizenscore_max(arr, l+2, r,memo), aizenscore_max(arr, l+1, r-1,memo));
int end = arr[r] + min(aizenscore_max(arr,l+1, r-1,memo), aizenscore_max(arr,l, r-2,memo));
memo[l][r]=max(start,end);
return max(start,end);
}
int main(){
    int n;
    cin>>n;
    int nums[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       cin>> nums[i][j]; 
    }
    }
    int arr[n];
    for(int i=0;i<n/2;i++){
        int sum1=0;
        int sum2=0;
        for(int j=i+1;j<n-i;j++){
            sum1+=nums[i][j]+nums[j][n-i-1];
            sum2+=nums[n-i-1][n-j-1]+nums[n-j-1][i];
        }
        sum1-=nums[n-i-1][n-i-1];
        sum2-=nums[i][i];
        arr[i]=sum1;
        arr[n-i-1]=sum2;
    }
    for(int nums:arr)cout<<nums<<" ";
    cout<<endl;
    vector<vector<int>> memo(n,vector<int>(n,-1));
    //max sum assuming ichigo plays optimally 
    cout<<aizenscore_max(arr,0,n-1,memo);
}