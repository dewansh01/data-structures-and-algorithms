#include<iostream>

//When you pass an array to a function, you are actually passing a pointer to the first element of the array
void monotonicallyDesreasingInsertionSort(int arr [] , int n){
    for(int i=1;i<n;i++){
        int key = arr [i];
        int j = i-1;
        while(j>-1 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

using namespace std;
int main(){
    int arr []  = {1,2,3,4,5};
    monotonicallyDesreasingInsertionSort(arr,5);
    for(int x:arr)cout<<x<<" ";
}

