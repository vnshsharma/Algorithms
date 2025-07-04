#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(vector<int> arr,int key){
    int n = arr.size();
    int start=0, end=n-1;

    // Binary Search Algoithm
    while (start<end){
        int mid = (start+end)/2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            start=mid+1;
        } else {
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the key element: ";
    cin>>key;

    int result = Binary_Search(arr,key);
    cout<<"The element found at index : "<<result<<endl;
    return 0;
}