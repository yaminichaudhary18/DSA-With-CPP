#include<iostream>
int main(){
    int arr[]={20,8108,10,300,0,29500};
    int smallest=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++){
       if(arr[i]<smallest){
         smallest=arr[i];
       }
    }
    std::cout<<"smallest element: "<<smallest;
    return 0;

}