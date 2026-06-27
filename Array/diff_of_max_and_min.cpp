#include<iostream>
int main(){
    int a[]={11,20,3,4,55,6,7,8};
    int size=sizeof(a)/sizeof(a[0]);
    int largest=a[0];
    int smallest=a[0];
    for(int i=0;i<size;i++){
        if (a[i]>largest)
        {
            largest=a[i];
        }
        
    }
    for(int i=0;i<size;i++){
        if (a[i]<smallest)
        {
            smallest=a[i];
        }
        
    }
    std::cout<<"largest = "<<largest<<'\n';
    std::cout<<"smallest = "<<smallest<<'\n';
    int diff=largest -smallest;
    std::cout<<"Difference of Maximum and minimum : "<<diff;
    return 0;
}