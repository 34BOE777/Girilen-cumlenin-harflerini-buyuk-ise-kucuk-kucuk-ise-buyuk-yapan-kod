#include<iostream>
#include<cctype>
using namespace std;

int main()
{

	string cu;
	
	getline(cin,cu);
	for (int i=0;i<cu.length();i++)//length yerine size() da kullanılabilir ama size(), bizlere o string arrayinde bulunan eemanların büyüklüğünü byte cinsinden hesapladığı için sağlıklı bir çözüm olmaz. onun yerine arrayin direk eleman sayısını döndüren lentgh fonksiynunu kullanmak daha sağlıklı olacaktır. 
	{
		if(isupper(cu[i]))
		{
			cu[i]=tolower(cu[i]);
		
	}

		else if (islower(cu[i]))
		{
				cu[i]=toupper(cu[i]);
		}

	}
	cout<<cu<<endl;
	
	return 0;
}
