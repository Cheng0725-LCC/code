#include <iostream>
using namespace std;

int fat(int x){
    if(x==1)
    return 1;
    else
    return x*fat(x-1);

}

int main(){
    int result=fat(5);
    cout<<result<<endl;

}