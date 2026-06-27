#include<iostream>
int main(){
    int arr[]={20,8108,10,300,3,29500};
    int largest=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++){
       if(arr[i]>largest){
         largest=arr[i];
       }
    }
    std::cout<<"largest : "<<largest;
    return 0;

}