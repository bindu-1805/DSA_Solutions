//Painter's Partition problem - https://www.hackerearth.com/problem/algorithm/painters-partition/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){ 
    int painter=1, time=0;
    for(int i=0;i<n;i++){ //O(n)
        if(time+arr[i]<=maxAllowedTime)
          time+=arr[i];
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter>m?false:true;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    //O(log(sum)* n)
    int sum=0, maxVal=INT_MIN;
    for(int i=0;i<n;i++){ //O(n)
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    
    int st=maxVal, end=sum, ans=-1;
    while(st<=end){ 
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int>arr={40,30,10,20};
    int n=4,m=2;
    cout<<minTimeToPaint(arr,n,m)<<"\n";
    return 0;
}
