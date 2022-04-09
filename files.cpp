#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream ofile("demofile.txt");
	ofile<<"Hello everyone"<<endl;
	ofile<<"Good afternoon!"<<endl;
	ofile<<"How are you?";
	ofile.close();
	
	string s1;
	ifstream wfile("demofile.txt");
	while(getline(wfile,s1))
	{
		ofstream rfile("ouput.txt", ios::app);
		rfile<<s1<<endl;;
	}		
}
