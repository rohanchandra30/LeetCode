#include <iostream>
#include <math.h>
# include <stack>

using namespace std;
stack<int> S;

int min(int a, int b){
	 return a<b?a:b;
}
int computecounts(int i, int k){

	for (int j = 1; j <= floor(sqrt(k))-i; ++j)
	{
	S.push(j*j);
	}
	int count=0;
while(!S.empty()){

	if (S.top()<=k)
	{

		count++;
		k=k-S.top();
	}
	else{
		S.pop();
	}
}
return count;
}

int main(int argc, char const *argv[]) 

{
	int n;
	cin>>n;
	int x=n;
	for (int i = 0; i < floor(sqrt(n)); ++i)
	{
x=min(computecounts(i,n),x);
	}
cout<<x<<"\n";
return 0;
}