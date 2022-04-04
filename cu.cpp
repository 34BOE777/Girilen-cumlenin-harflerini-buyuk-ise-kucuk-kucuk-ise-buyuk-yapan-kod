#include<iostream>
#include<cctype>
using namespace std;

int main()
{

	string cu;
	getline(cin,cu);
	for (int i=0;i<cu.size();i++)
	{
		cu[i]=toupper(cu[i]);
	}
	cout<<cu<<endl;
	return 0;
}