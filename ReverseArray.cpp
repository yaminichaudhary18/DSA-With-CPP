#include<iostream>
#include<vector>
int main(){
    int arr[]={20,8108,102,300,3,29500};
    int size=sizeof(arr)/sizeof(arr[0]);
    int revArr[size];

    for(int i=0;i<size;i++){
       revArr[i]=arr[size-1-i];
    }
    std::cout << "Reversed array : ";
    for(int i=0;i<size;i++){
        std::cout << revArr[i] << " ";
    }

    
    return 0;

}