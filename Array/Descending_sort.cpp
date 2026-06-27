#include<iostream>
int main(){
    int a[]={54,12,6,98,1};
    int size=sizeof(a)/sizeof(a[0]);
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (a[j]<a[j+1])
            {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp; 
            }
            
        }
        
    }
    std::cout<<"sorted array : ";
    for(int i=0;i<size;i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}