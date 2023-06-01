// 방법 1
#include <iostream>
using namespace std;
 
int main()
{
	int a[10];
	
	for (int i=0; i<10; i++)
	{
		scanf("%1d", &a[i]);
	}
	
	for (int i=0; i<10; i++)
	{
		cout<<a[i]<<endl;
	}
}





// 방법 2
#include <iostream>
using namespace std;
 
int main()
{
	int a[10];
	string s;
	cin>>s;
	
	for(int i=0; i<s.size(); i++)
	{
		a[i]=s[i]-'0';
	}
	
	for (int i=0; i<s.size(); i++)
	{
		cout<<a[i]<<endl;
	}	
	
}