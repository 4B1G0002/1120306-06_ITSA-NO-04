﻿// 1120306-06_ITSA NO-04.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>  
using namespace std;  
  
int main()  
{  
    int startH=0,startM=0,endH=0,endM=0;  
       
    cin>>startH>>startM;  
    cin>>endH>>endM;  
    int time=(endH*60+endM)-(startH*60+startM);  
    if(time<=120 && time>=0){  
        cout<<time/30*30<<endl;  
    }   
    else if(time>120 && time<=240){  
        cout<<(time-120)/30*40+120<<endl;  
    }  
    else{  
        cout<<(time-240)/30*60+120+160<<endl;  
    }   
    return 0;  
}  
