#include <bits/stdc++.h>
using namespace std;


void printVector(vector<int>A)
{

	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

void sort(vector<int>&A)
{

	for(int i=0;i<A.size();i++){
		if(A[i]>A[i+1]){
			swap(A[i],A[i+1]);
		}
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);

	return 0;
}
