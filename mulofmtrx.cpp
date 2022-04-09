#include <iostream>
using namespace std;
void multiply(int rows,int cols,int m1[][2],int m2[][2])
{
	int add[rows][cols],sum;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			sum=0;
			for(int z=0; z<rows; z++)
			{
				int num=0;
				num=m1[z][i]*m2[j][z];
				sum+=num;
			}
			add[i][j]=sum;
		}
	}
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	const int rows=2;
	const int cols=2;
	int m1[rows][cols];
	int m2[rows][cols];
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<"enter matrix1 value:"<<i<<j<<" ";
			cin>>m1[i][j];
		}
	}
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<"enter matrix2 value:"<<i<<j<<" ";
			cin>>m2[i][j];
		}
	}
	multiply(rows,cols,m1,m2);
}
