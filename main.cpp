#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int compareWeight(int a,int b,int c){
    if(a>b&&a>c)
    return 1;
    if(a<b&&b>c)
    return 2;
    if(a<c&&b<c)
    return 3;
    if(a==b&&b>c)
    return 4;
    if(a==c&&a>b)
    return 5;
    if(b==c&&b>a)
    return 6;
    if(a==b&&b==c)
    return 7;
    return 0;
}

int main(){
   int res=rand()%99+2;
   int guss;
   cin>>guss;
   while(guss!=res){
       if(guss>res)
       cout<<"worng & what you guess is bigger!"<<endl;
       else
       cout<<"worng & what you guess is smaller!"<<endl;
       cin>>guss;
   }
   cout<<"right!"<<endl;
}