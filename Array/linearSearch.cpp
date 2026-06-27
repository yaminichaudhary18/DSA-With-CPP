#include<iostream>
int linearSearch(int arr[],int size,int item);
int main(){
    
    int arr[]={18, 37,78,57,10,29};
    int item ,index;

    std::cout<<"enter element to search:";
    std::cin>>item;

    int size=sizeof(arr)/sizeof(arr[0]);
       index=linearSearch(arr,size,item);
        if(index != -1){
            std::cout<<"Element found at index "<<index;
        }
        else{
            std::cout<<"Element not found" ;
        }
        return 0;
    }  
int linearSearch(int arr[],int size,int item){
        for(int i=0;i<size;i++){
           if(item==arr[i]){
              return i;
            }
        }
        return -1;
    }
