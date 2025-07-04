#include <iostream>
#include <vector>
using namespace std;
int Linear_Search(vector<int> &arr, int target){
    int n = arr.size();
    // Linear Search Algorithm
    for (int i=0; i<n; i++){
        if (arr[i] == target){
            return i+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the target Element: ";
    cin>>target;

    int result = Linear_Search(arr,target);
    cout<<"The element found at position: "<<result<<endl;
    return 0;
}