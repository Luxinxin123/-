# -

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main()
{
 int Num_1,Num_2,i,j,a,b;    //定义两个整数变量Num_1,Num_2，在四则运算时做100以内的整数算数，定义i,a为整型，做真分数的分子，定义j,b为整型，做真分数的分母。   
    int x,y;                    //定义整型x,y，x为siwtch,case语句中的事件，y随机生成一个数。
 srand((unsigned)time(NULL));//运用srand函数设立随机种子，让种子和当前时间有关，避免每次生成的随机数相同。
    for(int k=0;k<30;k++)       //运用for循环，共循环30次，生成30随机运算。
  {
      Num_1=rand()%100;   //运用rand()函数随机生成100以内的整数。
   Num_2=1+rand()%99;  //运用rand()函数生成1到100以内的整数，作为第二个运算数，避免在除法运算中0的出现。
      i=rand()%100;       //用于随机生成第一个真分数的分子。
      j=1+rand()%99;      //用于随机生成第一个真分数的分母。
      a=rand()%100;       //用于随机生成第二个真分数的分子。
      b=1+rand()%99;      //用于随机生成第二个真分数的分母。
      y=1+rand();         //随机生成一个整数，用于除以15取余
         x=y%16;             //把取得的余数赋给x，整数和整数之间的四则运算，分数之间的四则运算，整数和分数之间的四则运算，分数和整数之间的四则运算
        switch(x)            //运用siwtch,case语句进行条件判断，随机生成。
          {
              case 0:cout<<Num_1<<"+"<<Num_2<<"="<<endl;break;//case0到case3是整数和整数之间的四则运算
              case 1:cout<<Num_1<<"-"<<Num_2<<"="<<endl;break;
              case 2:cout<<Num_1<<"*"<<Num_2<<"="<<endl;break;
              case 3:cout<<Num_1<<"/"<<Num_2<<"="<<endl;break;
              case 4:if(i<j)                                  //case4到case7是分数和分数之间的四则运算
                {
               if(a<b)
                           {cout<<"("<<i<<"/"<<j<<")"<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
               else  
                  {cout<<"("<<i<<"/"<<j<<")"<<"+"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
                }
              else 
        {
         cout<<"("<<j<<"/"<<i<<")"<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
        }  
        break;
              case 5:if(i<j)
                {
               if(a<b)
      {cout<<"("<<i<<"/"<<j<<")"<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}  
               else
      {cout<<"("<<i<<"/"<<j<<")"<<"-"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
                }
               else
                  {
       cout<<"("<<j<<"/"<<i<<")"<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }  
         break;
             case 6:if(i<j)
               {
              if(a<b)
        {cout<<"("<<i<<"/"<<j<<")"<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
              else 
        {cout<<"("<<i<<"/"<<j<<")"<<"*"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
         
               }
              else
      {
       cout<<"("<<j<<"/"<<i<<")"<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }   
        break;
             case 7:if(i<j)
               {
              if(a<b)
        {cout<<"("<<i<<"/"<<j<<")"<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
       else  
        {cout<<"("<<i<<"/"<<j<<")"<<"/"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
         
               }
              else 
      {
       cout<<"("<<j<<"/"<<i<<")"<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }
        break;
          case 8:if(i<j)                              //case8到case11是分数和整数之间的四则运算
                 cout<<i<<"/"<<j<<"+"<<Num_2<<"="<<endl;
             else 
              cout<<j<<"/"<<i<<"+"<<Num_2<<"="<<endl;
       break;
          case 9:if(i<j)
                 cout<<i<<"/"<<j<<"-"<<Num_2<<"="<<endl;
              else
                 cout<<j<<"/"<<i<<"-"<<Num_2<<"="<<endl;
              break;
          case 10:if(i<j)
                 cout<<i<<"/"<<j<<"*"<<Num_2<<"="<<endl;
            else
           cout<<i<<"/"<<j<<"*"<<Num_2<<"="<<endl;
          break;
          case 11:if(i<j)
                  cout<<i<<"/"<<j<<"/"<<Num_2<<"="<<endl;
            else
            cout<<i<<"/"<<j<<"/"<<Num_2<<"="<<endl;
            break;
             case 12:if(a<b)                           //case12到case15是分数和整数之间的四则运算
                cout<<Num_1<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;  
            else
          cout<<Num_1<<"+"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
            break;
             case 13:if(a<b)
               cout<<Num_1<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
      cout<<Num_1<<"-"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
            break;
             case 14:if(a<b)
                        cout<<Num_1<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
      cout<<Num_1<<"*"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
               break;
             case 15:if(a<b)
                       cout<<Num_1<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
         cout<<Num_1<<"/"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
              break;
           }
     } 
}
