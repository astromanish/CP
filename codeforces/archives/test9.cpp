#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char *s1 = (char *)malloc(100);
	char *s2 = (char *)malloc(100);
	char *s3 = (char *)malloc(100);
	cin>>s1>>s2;
	for(int i=0;i<strlen(s1);i++)
	{
		if(*(s1+i)==*(s2+i))
		{
			*(s3+i)='0';
		}
		else
		{
			*(s3+i)='1';
		}			
	}
	for(int j=0;j<strlen(s1);j++)
	{
		cout<<s3[j];
	}
	return 0;
}