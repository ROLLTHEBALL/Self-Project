#include<iostream>
using namespace std;
int binarySearch1(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key)
{
    return mid;
}  
if(key>arr[mid]){
    s=mid+1;

}
else{
    end=mid-1;

mid=(s+e)/2};  }
return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int k=binarySearch(even,6,6);
    cout<<k;
}