#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s;
    s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<=e){
     if (arr[mid]==key){
     return mid;
    }
    if (arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=(s+e)/2;}
    return -1; 
}
int main(){
   int a[6]={2,4,5,6,7,9};
   int key=6;
    cout<<binarySearch(a,6,key);
}