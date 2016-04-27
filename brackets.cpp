#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{int flag=1;
	string s;
	getline(cin,s);
	for (int i = 0; i < s.length(); ++i)
	{
		if (!(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']'||s[i]=='{'||s[i]=='}'))
		{
			cout<<"enter only brackets!"<<"\n";
			return 0;
		}
	}
		for (int i = 0; i < s.length(); i+=2)
		{
					
					if ((s[i]==')'||s[i]==']'||s[i]=='}')||(s[i]=='('&&s[i+1]!=')')||(s[i]=='['&&s[i+1]!=']')||(s[i]=='{'&&s[i+1]!='}'))
				
					flag=0;				
				
				
			}
		

	
	//cout<<flag<<"\n";
	flag==1?
cout<<"valid":
cout<<"not valid";
	return 0;
}