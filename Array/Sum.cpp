#include<iostream>
int main(){
    int arr[]={20,108,10,300,3,25};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    std::cout<<"Sum of array elements is : "<<sum;
    return 0;
}