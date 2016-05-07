#include <iostream>
#include <vector>
#include <stack>


using namespace std;

struct Point
{
		int x,y;

		};

void DisplayPoints(vector<Point>& PtVector){
	for (int i = 0; i < PtVector.size(); ++i)
	{
		cout<<"("<<PtVector[i].x<<","<<PtVector[i].y<<")"<<"\n";
	}
}


void topsort(int n, stack<int>& S, int A[],vector<Point>& V){
	A[n-1]=1;
	for (int j = 0; j < V.size(); ++j)
	{
		if (V[j].x==n && A[V[j].y-1]==-1)
			// cout<<V[j].y;
			topsort(V[j].y,S,A,V);
	}


			S.push(n);
			//cout<<S.size()<<S.top();
}

int main(int argc, char const *argv[])
{

	Point P;
	vector<Point> Pairs;
	stack<int> sorted;
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int e=5;
	int f=6;
	int g=7;

	// P.x=1;
	// P.y=3;
	// Pairs.push_back(P);
	// P.x=2;
	// P.y=3;
	// Pairs.push_back(P);
	// P.x=2;
	// P.y=5;
	// Pairs.push_back(P);
	// P.x=3;
	// P.y=4;
	// Pairs.push_back(P);
	// P.x=4;
	// P.y=6;
	// Pairs.push_back(P);
	// P.x=5;
	// P.y=6;
	// Pairs.push_back(P);
	// P.x=6;
	// P.y=7;
	// Pairs.push_back(P);
		
	P.x=1;
	P.y=2;
	Pairs.push_back(P);
	P.x=1;
	P.y=3;
	Pairs.push_back(P);
	P.x=2;
	P.y=4;
	Pairs.push_back(P);
	P.x=3;
	P.y=4;
	Pairs.push_back(P);

		
	// int visited[7]={-1,-1,-1,-1,-1,-1,-1};
	// int vertex[7]={a,b,c,d,e,f,g};
	// for (int i = 0; i < 7; ++i)
		int visited[4]={-1,-1,-1,-1};
	int vertex[4]={a,b,c,d};
	for (int i = 0; i < 4; ++i)
	{
		if (visited[vertex[i]-1]==-1)
			topsort(vertex[i],sorted,visited,Pairs);


	// for (int k = 0; k < sorted.size(); ++k)
	// {
	// 	cout<<sorted.top()<<"\n";
	// 	sorted.pop();
	// }
		
	}
//	cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	// cout<<sorted.top();
	// sorted.pop();
	while(!sorted.empty()){
	cout<<sorted.top();
	sorted.pop();	
	}

// DisplayPoints(Pairs);
	// for (int k = 0; k < sorted.size(); ++k)
	// {
	// 	cout<<sorted.top()<<"\n";
	// 	sorted.pop();
	// }

	return 0;
}