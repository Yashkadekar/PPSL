#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum,sub,product;
	float divide;
	cout<<"enter the two no:";
	cin>>num1;
	cin>>num2;
	sum=num1+num2;
	sub=num1-num2;
	product=num1*num2;
	divide=num1/(float)num2;
	cout<<endl<<"sum="<<sum;
	cout<<endl<<"sub="<<sub;
	cout<<endl<<"product="<<product;
	cout<<endl<<"divide="<<divide;
	return 0;
}