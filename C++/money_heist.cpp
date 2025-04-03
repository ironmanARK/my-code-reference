#include<iostream>
#include<vector>
using namespace std;
bool isvalid(int i,int j,int n){
return i>=0&&i<n&&j>=0&&j<n;
}
int  burgling(vector<vector<int>>&nums,vector<vector<bool>>&visited,vector<vector<int>> &memo,int n,int i,int j){
    //base case
    if(visited[i][j]||!isvalid(i,j,n)) return 0;

    //checking the houses 
    if(memo[i][j]!=-1) return memo[i][j];
    visited[i][j]=true;
    //option available ya toh iss ghar ko loot lo ya toh aage badh jaao
    int rob_current = nums[i][j];
    //for(int )
}
int main(){
    int n;
    cin>>n;
   vector<vector<int>> nums;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    vector<vector<bool>> visited(n,vector<bool>(n,0));
    vector<vector<int>> memo;
    cout<<burgling(nums,visited,memo,n,0,0);
}