
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	int flag,index=0;
	cout<<"Enter string to be checked:"<<endl;
	getline(cin, s); 
	int size= s.length();
	char rev[size];
	cout<<"Original String="<<s<<endl;
		cout<<"Reversed String=";
	for(int k=size-1;k>=0;k--)
		cout<<s[k];
	cout<<endl;
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	int j=size-1,i=0;
	while(i<=j)
	{
		while(s[i]==' ')
		{
			i++;
		}
		while(s[j]==' ')
		{
			j--;
		}
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
		else
		{
			i++;j--;
			flag=0;
		}
	}
	if (flag==1)
		cout<<"Not a Palindrome!!"<<endl;
	else
		cout<<"Palindrome!!"<<endl;
}
