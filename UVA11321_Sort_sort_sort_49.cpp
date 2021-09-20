/*
Sample Input
15 3
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
0 0
Sample Output
15 3
15
9
3
6
12
13
7
1
4
10
11
5
2
8
14
0 0
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int a[10001]={0},n,m; //LESS�Լ������� ������ �ؼ� global�Լ��� ����; 

bool LESS(int x,int y)
{
	if((x%m)!=(y%m)) //���� ���� �迭 
	{
		return (x%m)<(y%m);
	}
	else
	{
		if(abs(x%2)!=abs(y%2)) //���࿡ �ϳ��� Ȧ���� �ϳ��� ¦���� Ȧ���� ¦������ �տ� ����; 
		{
			return abs(x%2)>abs(y%2);
		}
		else if(abs(x%2)==1&&abs(y%2)==1) //�Ѵ� Ȧ���� ū ���� �տ�; 
		{
			return x>y;
		}
		else if(abs(x%2)==0&&abs(y%2)==0) //�Ѵ� ¦���� ���� ���� �տ�; 
		{
			return x<y;	
		}
	}
}


int main()
{
	while(cin>>n>>m)
	{
		if(n==0)
		{
			cout<<"0 0"<<endl;
			break;
		}
		else
		{
			cout<<n<<" "<<m<<endl;
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,LESS);
		cout<<n<<" "<<m<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
	}
return 0;
}

