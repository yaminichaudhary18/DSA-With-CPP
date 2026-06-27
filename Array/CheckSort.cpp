#include<iostream>

int main(){
    int arr[]={16,78,45,2,90,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool isSorted=true;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
    }
      
    if (isSorted) {
        std::cout << "Array is sorted!" << '\n';
    } 
    else {
        std::cout << "Array is not sorted!" << '\n';
    }

     return 0;
}