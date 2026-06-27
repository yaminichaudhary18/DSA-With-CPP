#include <iostream>
int main(){
    int arr[]={20,8108,102,3001,3,29500};
    int countE=0,countO=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       if(arr[i]%2==0){
        countE++;
       }
       else{
        countO++;
       }
    }
    std::cout<<"Total even numbers : "<<countE <<'\n';
    std::cout<<"Total odd numbers : "<<countO;
    
    return 0;

}