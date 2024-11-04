//GFG - Allocate Minimum Pages
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>&arr, int n, int m, int maxAllowedPages){ 
    int student=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages) //edge case - O(n)
          return false;
          
        if(pages+arr[i]<=maxAllowedPages)
          pages+=arr[i];
        else{
            student++;
            pages=arr[i];
        }
    }
    return student>m?false:true;
}

int allocateBooks(vector<int>&arr, int n, int m){  //O(logN*n)
    if(m>n)  //edge case
      return -1;
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    int ans=-1;
    int st=0,end=sum; //range of possible answers
    while(st<=end){  //O(logN)
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr ={15,17,20};
    int n=3,m=2;
    cout<<allocateBooks(arr,n,m);
    return 0;
}