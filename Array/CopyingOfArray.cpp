#include<iostream>

int main(){
    int arr[]={18,45,9,67,15,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    int New[size];

    for(int i=0;i<size;i++){
        New[i]=arr[i];
    }
    std::cout<< "Copied array is : ";

    for(int i=0;i<size;i++){
        std::cout <<New[i] << " ";
    }
    return 0;
}