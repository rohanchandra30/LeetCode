#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string input;

	getline(cin,input);
	int HashArray[128]={0};
	for (int i = 0; i < input.length(); ++i)
	{
		if (HashArray[(int) input[i]]==1)
		{
			cout<<"Not Unique"<<"\n";
			return 0;
		}
		else HashArray[(int) input[i]]=1;
	}
	cout<<"String is unique"<<"\n";;
	return 0;
}