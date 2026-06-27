#include<iostream>
int compare(int a1[],int a2[]);
int main(){
    int a1[]={1,2,3,4,5,6};
    int a2[]={1,2,3,4,5,6};

    std::cout<<"first array : ";
    for (int i = 0; i < 6; i++)
    {
        std::cout<<a1[i]<<" ";
    }

    std::cout<<'\n';

    std::cout<<"second array : ";
    for (int i = 0; i < 6; i++)
    {
        std::cout<< a2[i]<<" ";
    }

    std::cout<<'\n';

    int result=compare(a1,a2);
    if (result!=-1)
    {
        std::cout<<"arrays are not equal";
    }
    else{
        std::cout<<"arrays are equal";
    }

    return 0;
}
int compare(int a1[],int a2[]){
     for (int i = 0; i < 6; i++)
    {
        if(a1[i]!=a2[i]){
           return 1;
        }
    }
    return -1;
}