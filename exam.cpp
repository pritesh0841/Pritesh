#include<bits/stdc++.h>
using namespace std;
int countPlatforms(int n,float arr[],float dep[])
{
 sort(arr,arr+n);
 sort(dep,dep+n);
 int ans=1;
 int count=1;
 int i=1,j=0;
 while(i<n && j<n)
 {
 if(arr[i]<=dep[j]) 
 {
 count++;
 i++;
 }
 else 
 {
 count--;
 j++;
 }
 ans=max(ans,count); 
 }
 return ans;
 }
 int main()
{
 int n;
 cin>>n;
 float arr[n];
 float dep[n];
 for(int i=0;i<n;i++)
 cin>>arr[i]>>dep[i];
 cout<<"Minimum number of Platforms required "<<countPlatforms(n,arr,dep)<<endl;
 return 0;
}




