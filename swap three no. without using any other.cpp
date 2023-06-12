#include<iostream>
using namespace std;

int main(){
	int a=5, b=10, c=15;
	a = a+b+c;
	b = a-(b+c);
	c = a-(b+c);
	a = a-(b+c);
	cout<<'a is '<<a<<endl;
	cout<<'b is '<<b<<endl;
	cout<<'c is '<<c<<endl;
	return 0;
}

