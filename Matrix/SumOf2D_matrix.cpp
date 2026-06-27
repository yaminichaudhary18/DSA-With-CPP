#include<iostream>
int main(){
    int a[2][3]={{1,2,3},
                 {4,9,6}};
    int sum=0;
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 3; j++){
        sum+=a[i][j];
      }
      std::cout<<'\n';
    }
      std::cout<<"sum of matrix = "<<sum;
    
 return 0;          
}