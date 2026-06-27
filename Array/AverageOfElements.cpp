#include<iostream>
int main(){
    int arr[]={20,8108,102,300,3,29500};
    int sum=0;
    double avg;
    double size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       sum+=arr[i];
    }
    avg=(sum/size);
    std::cout<<"Average of elements is: "<<avg;
    return 0;

}