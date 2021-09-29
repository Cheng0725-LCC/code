#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
//输入三个数字，比较大小
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
//猜数字
void guessNumber(){
    int k,times=1;
    cout<<"please input the max number you want to guess"<<endl;
    cin>>k;
   int res=rand()%k+1;
   cout<<"please input the number between 1 and "<<k<<endl;
   int guss;
   cin>>guss;
   while(guss!=res){
       if(guss>res)
       cout<<"WORNG & what you guess is BIGGER!"<<endl;
       else
       cout<<"WORNG & what you guess is SMALLER!"<<endl;
       cout<<"input the number you guess AGAIN~"<<endl;
       cin>>guss;
       times++;
   }
   cout<<"right! you totally guess "<<times<<" times"<<endl;
}
//找三位数中的水仙花数
void findNarcissisticNumber(){
    int a,b,c;//分别是个位、十位、百位
    int num=100;
    do{
        c=num/100;
        b=(num-c*100)/10;
        a=num-c*100-b*10;
        if(c*c*c+b*b*b+a*a*a==num){
        cout<<num<<endl;
        }
        num++;
    }while(num<1000);
}
//1~100遇7或7的倍数就输出敲桌子，否则打印数字
void knockDesk(){
    int a,b,c;
    for(int i=1;i<=100;i++){
        c=i/100;
        b=(i-c*100)/10;
        a=i-c*100-b*10;
        if(a==7||b==7||i%7==0)
        cout<<"knock desk ";
        else
        cout<<i<<" ";
    }
}
//打印*矩阵
void printMetrix(int col,int line){
    for(int i=0;i<line;i++){
        for(int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//打印9x9乘法表
void printTimesTable(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
}
//打印数组中最大的数;
void printMaxNum(int arr[5]){
    int temp=arr[0];
    for(int i=1;i<5;i++){
        if(temp<arr[i])
        temp=arr[i];
    }
    cout<<"the max number is: "<<temp<<endl;
}
//数组逆置
void reverseArray(int* arr){
    int arr2[5],i;
    for(i=0;i<5;i++)
    arr2[i]=arr[4-i];
    for(i=0;i<5;i++)
    arr[i]=arr2[i];
}
//冒泡排序，数组元素为15个
void bubbleSort(int* arr){
    for(int i=0;i<14;i++){
        for(int j=0;j<14-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//逆序输出数字各个位的数字
void apartNumReverse(int x){
    int d;
    do{
        d=x%10;
        cout<<d;
        if(x>9)
        cout<<" ";
        x/=10;
    }while(x>0);
}
//正序输出数字各个位的数字
void apartNum(int x){
    int t=x,mask=1,d;
    while(t>9){
        mask*=10;
        t/=10;
    }
    do{
        d=x/mask;
        cout<<d;
        if(mask>9)
        cout<<" ";
        x%=mask;
        mask/=10;
    }while(mask>0);
}
//最大公约数
int greatestComDiv(int a,int b){
    int t;
    while (b!=0)
    {
       t=a%b;
       a=b;
       b=t;
    }
    return a;
}
//输出不超过6的。。。
void numArray(int x){
    int i,j,k,cunt=0;
    for(i=x;i<=x+3;i++){
        for(j=x;j<=x+3;j++){
            for(k=x;k<=x+3;k++){
                if(i!=k && i!=j && k!=j){
                    cout<<i<<j<<k;
                    cunt++;
                    if(cunt==6){
                    cout<<endl;
                    cunt=0;
                    }
                    else
                    cout<<" ";
                }
            }
        }
    }
}
int main(){
    numArray(6);
}