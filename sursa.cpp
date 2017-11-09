#include<iostream>
using namespace std;
int n;

void back(int st[], int k)
{
	int i,ev,j;
	if(k==n+1)
	{
		for(int i = 1; i < k; i++)
			cout << st[i] << " ";
		cout << endl;
	}
	else
		for(int i = 1; i <= n; i++)
		{
			st[k] = i;
			ev=1;
			for(j = 1; j < k; j++)
				if(st[j] == st[k])
					ev=0;
			if(ev)
				back(st, k+1);
		}
}

int main()
{
	int st[50];
	cout << "n="; cin >> n;
	back(st, 1);
	return 0;
}
