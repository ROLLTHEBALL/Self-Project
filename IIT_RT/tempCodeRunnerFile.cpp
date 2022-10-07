#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key)
         return mid;
         else if (arr[mid]>key)
          start=mid+1;
          else
          end=mid-1;
    }
    return -1;}
    int main(){
        int a[5]={2,3,4,5,6};
        binarySearch(a,5,3);
    return 0;
}