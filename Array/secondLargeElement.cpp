#include<iostream>

int main(){
    int arr[]={20,18,81080,10,29499,3,29500};
    int largest=arr[0];
    int secLargest=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<size;i++){
       if(arr[i]>largest){
         largest=arr[i];
       }
    }

    for(int i=1;i<size;i++){
       if(largest > arr[i] && !(secLargest >arr[i])){
         secLargest=arr[i];
       }
    }
    
    std::cout<<"largest : "<<largest << '\n';
    std::cout<<"second largest element is : "<<secLargest;
    return 0;
}