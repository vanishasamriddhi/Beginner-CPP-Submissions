//pattern-13
#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cout<<"emter no of rows"<<endl;
	cin>>n;
	cout<<"enter no of columns"<<endl;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		k=65;
		for(int j=1;j<=m;j++)
		{
			if(j>=(n+1)-i && j<=(n-1)+i)
			{
				cout<<(char)(k);
				if(j<(m/2)+1)
				{
					k++;
				}
				else{k--;
				}
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
