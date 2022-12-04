#include<bits/stdc++.h>
using namespace std;
void binary(int a)
{
	for(int i=9;i>=0;--i)
	{
		cout<<((a>>i)&1);
	}
	cout<<endl<<endl;
}

void isset(int a,int i)
{
	if(((1<<i)&a)!=0){
		cout<<"set"<<endl<<endl;
	}
	else
		cout<<"unset"<<endl<<endl;
}

void countset(int a)
{
	int c=0;
	for(int i=31;i>=0;--i)
	{
		if((a&(1<<i))!=0)
			c++;
	}
	cout<<c<<endl<<endl;
}


void setbit(int a,int i)
{
	binary(a|(1<<i));
}



void unset(int a,int i)
{
	binary(a&(~(1<<i)));
}



void toggle(int a,int i)
{
	binary(a^(1<<i));
}



void powerof2(int i)
{
	cout<<(1<<i)<<endl<<endl;
}



void evenodd(int a)
{
	if(a&1)
		cout<<"odd"<<endl<<endl;
	else
		cout<<"even"<<endl<<endl;
}



void multiply(int a)
{
	cout<<(a<<1)<<endl<<endl;
}



void divide(int a)
{
	cout<<(a>>1)<<endl<<endl;
}



void small(char A)
{
	cout<<(char(A|(1<<5)))<<endl;
	//since the (1<<5) is equal to space letter
	//we can use space in place of (1<<5)
	cout<<(char(A|' '))<<endl<<endl;
}



void capital(char a)
{
	cout<<char(a&(~(1<<5)))<<endl;
	//since the ~(1<<5) is equal to underscore operator
	//we can use underscore in place of~(1<<5)
	cout<<(char(a&'_'))<<endl<<endl;
}



void power(int n)
{
	if(n&(n-1))
		cout<<"not power of 2"<<endl<<endl;
	else
		cout<<"power of 2"<<endl<<endl;
}




int main()
{
	int a=18;
    int i=5;
    char A='A';
    char b='a';
	cout<<"printing the numbers in the binary form"<<endl;
	binary(a);


	cout<<"is the bit set"<<endl;
	isset(a,3);


	cout<<"counting the set bits int the binary form"<<endl;
	countset(a);

    i=4;
	cout<<"set the bit"<<endl;
	setbit(a,i);

	i=1;
	cout<<"unset the bit"<<endl;
	unset(a,i);

	i=5;
	cout<<"toggling the bit"<<endl;
	toggle(a,i);

    i=3;
    cout<<"finding the power of 2's"<<endl;
    powerof2(i);

    cout<<"odd or even"<<endl;
    evenodd(a);

    cout<<"multiply with 2"<<endl;
    multiply(a);

    cout<<"divide by 2"<<endl;
    divide(a);

    cout<<"conversion of capital to small"<<endl;
    small(A);

    cout<<"conversion of small to capital"<<endl;
    capital(b);

    cout<<"checking power of 2 or not"<<endl;
    power(a);
}
