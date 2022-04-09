#include <iostream>
#include <string>
using namespace std;
void convert()
{
	string s1;
	cout<<"Enter string:";
	cin>>s1;
	int i=0;
	while (s1[i]!='\0')
	{
		if (s1[i]>96 && s1[i]<123)
		{
			s1[i]-=32;
		}
		i++;
	}
	cout<<"Uppercase string is "<<s1;
}

void concat()
{
	string s1;
	string s2;
	cout<<"String1:";
	cin>>s1;
	cout<<"String2:";
	cin>>s2;
	string s3;
	s3=s1+" "+s2;
	cout<<s3;
}
void compare()
{
	string s1;
	string s2;
	cout<<"String1:";
	cin>>s1;
	cout<<"String2:";
	cin>>s2;
	int cmp=s1.compare(s2);
	cout<<cmp;
}
void reverse()
{
	string s1;
	string s2;
	cout<<"string:";
	cin>>s1;
	s2="";
	int n=s1.length();
	for (int i=n-1; i>=0; i--)
	{
		s2=s2+s1[i];
	}
	cout<<"Reverse string is "<<s2;
}
int main()
{
	cout<<"a)Convert all lowercase characters to uppercase"<<endl;
	cout<<"b)Concatenate two strings"<<endl;
	cout<<"c)Compare two strings"<<endl;
	cout<<"d)Reverse the string"<<endl;
	int choice;
	cout<<"Choice(1/2/3/4):";
	cin>>choice;
	if (choice==1)
	{
		convert();
	}
	else if (choice==2)
	{
		concat();
	}
	else if(choice==3)
	{
		compare();
	}
	else
	{
		reverse();
	}
}
