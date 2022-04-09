#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int count1=0;
	int count2=1;
	int count3=0;
	string s1;
	char c;
	ifstream ifile("demofile.txt"); #premade text file
	while(ifile.get(c))
	{
		count1++;
		if (c==' ' || c=='\t' || c=='\n')
		{
			count2++;
		}
		if(c=='\n')
		{
			count3++;
		}
	}
	cout<<"No of characters:"<<count1<<endl;
	cout<<"No of words:"<<count2<<endl;
	cout<<"No of lines:"<<count3<<endl;
}
