#include <iostream>
using namespace std;
int* array(int num)
{
	int* a=new int[num];
	for(int i=0; i<num; i++)
	{
		cout<<"enter value"<<i<<":";
		cin>>a[i];
	}
	return a;
}
int* merge(int num, int num1, int arr[], int arr1[])
{
	int* mer=new int[num+num1];
	for(int i=0; i<num; i++)
	{
		mer[i]=arr[i];
	}
	for(int i=0; i<num1; i++)
	{
		mer[i+num]=arr1[i];
	}
	return mer;
}
void sorteddisplay(int num, int num1,int mer[])
{
	cout<<"new array is:";
	for(int i=0; i<num+num1; i++)
	{
		for(int j=i+1; j<num+num1; j++)
		{
			if(mer[i]>mer[j])
			{
				swap(mer[i],mer[j]);
			}
		}
		cout<<mer[i]<<" ";
	}
}
int main()
{
	int num,num1;
	cout<<"enter size for first array:";
	cin>>num;
	int *arr=array(num);
	cout<<"enter size for second array array:";
	cin>>num1;
	int *arr1=array(num1);
	int *mer=merge(num,num1,arr,arr1);
	sorteddisplay(num,num1,mer);
	return 0;	
}
