#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
         return mid;}
         else if (key>arr[mid]){
          start=mid+1;}
          else{
          end=mid-1;}

          mid=(start+end)/2;
    }
    return -5 ;}
    int main(){
        int a[5]={2,4,6,7,8};
        int index =binarySearch(a,5,3);
        cout<<index;
    return 0;
}