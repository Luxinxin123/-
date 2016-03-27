# -
#include<iostream>
#include<string>
#include<time.h>
#define N 1000
using namespace std;
int main()
{	
	srand((unsigned)time(NULL));
	int num[N],dpo[N][2];
	int n;
	cout<<"请输入数组的长度："<<endl;
	cin>>n;
	cout<<"这个数组为："<<endl;
    for(int i=0;i<n;i++)
	{
		num[i]=-5+rand()%15;
		if(num[i]==0)
		{
			num[i]=1+rand()%15;
		}
	    cout<<num[i]<<" ";
    }
	cout<<endl;
	cout<<"最大和子数组为："<<endl;
	int front,Max=-300,arr[100][100],max_a[N];//front是指数值环中的每一个元素都可以当头，Max指输出的最大值，max_a用来存放每个元数组的最大值
	for(int j=0;j<n;j++)
	{
		front=num[0];
		for(int i=1;i<n;i++)
		{
			num[i-1]=num[i];
		}
		num[n-1]=front;               //在数组环中让每一个元素当头，左边的元素当尾，遍历元数组 
	    dpo[0][0]=0;
	    dpo[0][1]=num[0];
	    for(int i=0;i<n;i++)          //找出每一个元数组的子数组最大和，存放在max_a[]中
	   {
			dpo[i][0]=max(dpo[i-1][0],dpo[i-1][1]);
			dpo[i][1]=max(dpo[i-1][1]+num[i],num[i]);
			max_a[j]=max(dpo[i][0],dpo[i][1]);
			if(dpo[i][0]<=dpo[i][1])      //找每一个元数组的最大和子数组，采用循环比较的方法
			{   
				if(num[0]<0)
				{
					arr[0][j]=NULL;
				}
				arr[i][j]=num[i];
			}
			if(dpo[i][0]>dpo[i][1])
			{
				if((dpo[i][1]==dpo[i-1][1]+num[i])&&(dpo[i][1]>0))
				{
					arr[i][j]=num[i];
				}
				else
				arr[i][j]=NULL;
			}
		}
	}
	int p=n-1,arr_1[N],m=0,k,j;     //arr[]用来存放最大子数组
	for(int i=0;i<n;i++)            //比较每一个元数组的最大子数组的和，把最大的和赋给Max,
	{
		if(max_a[i]>Max)
		{
			Max=max_a[i];
			j=i;                  //找出最大和所在的元数组
		}
	}
	while(p>=0)                   //把最大和的子数组过滤出倒序存放在arr_1[]中
	{
		if(arr[p][j]==NULL)
		{
			p--;
		}
		if(arr[p][j]!=NULL)
		{
			while((arr[p][j]!=NULL)&&(p>=0))
			{
				arr_1[m]=arr[p][j];
				m++;
				k=m;
				p--;
			}
			p=-1;	
		}
	}
	for(int i=k-1;i>=0;i--)      //输出最大和子数组
	{
		cout<<arr_1[i]<<" ";
	}
	cout<<endl;
	cout<<"最大数组和为："<<endl;
	cout<<Max<<endl;
}
	
