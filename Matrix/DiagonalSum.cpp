#include<iostream>
int main(){
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int sum=0;
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        if(i==j){
           sum+=a[i][j];
        }
      }
      std::cout<<'\n';
    }
      std::cout<<"sum of  digonal matrix = "<<sum;
    
 return 0;          
}