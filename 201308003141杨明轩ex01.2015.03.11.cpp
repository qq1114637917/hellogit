/*
	������ʵ�ֵ��������ͷ���������ʽ��������Լ����еĴ𰸡�
	����ָ�����������Ƿ���ʽ������ָ������ 
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
using namespace std;

int addtion(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mutip(int a,int b)
{
	return a*b;
}

double division(int a,int b)
{
	return (double)a/b;
}

void save(int *as,int *bs,char* cs,int i,int a,int b,char c)
{
	as[i]=a;
	bs[i]=b;
	cs[i]=c;
}

int Int()
{
	//������Ϊ��������� 
	cout << "��������Ҫ���ɶ������������أ�������1~100" << endl;
	int num;
	cin >> num;
	int a,b;
	int* as=new int[num];
	int* bs=new int[num];
	char* cs=new char[num];
	for(int i=0;i<num;i++)
	{
		int a,b;
		a=rand()%100;
		b=rand()%100;
		switch(rand()%4)
		{
			case 0:	cout << i+1 << ".\t" << a << "  +  " << b << "  =" << endl;
		//				<< addtion(a,b) << endl;
					save(as,bs,cs,i,a,b,'+');
					break;
			case 1:cout  << i+1 << ".\t" << a << "  -  " << b << "  =" << endl;
		//				<< sub(a,b) << endl;
					save(as,bs,cs,i,a,b,'-');
					break;
			case 2:cout  << i+1 << ".\t" << a << "  ��  " << b << "  =" << endl;
		//				<< mutip(a,b) << endl;
					save(as,bs,cs,i,a,b,'*');
					break;
			case 3:cout  << i+1 << ".\t" << a << "  ��  " << b << "  =" << endl;
		//			printf("%.2f\n",division(a,b));
					save(as,bs,cs,i,a,b,'/');
					break;
		}
	}
	cout << "����Ҫ�������y/n��";
	char ch;
	int ok=0;
	do
	{
		if(ok)
		cout << "�����������������:" << endl;
		cin >> ch;
	}while(ch!='y'&&ch!='n');
	if(ch=='y')
	{
		for(int i=0;i<num;i++)
		{
			switch(cs[i])
			{
				case '+':cout << i+1 << ".\t" << as[i] << "  +  " << bs[i] << "  =  "
						<< addtion(as[i],bs[i]) << endl;
						break;
				case '-':cout  << i+1 << ".\t" << as[i] << "  -  " << bs[i] << "  =  "
						<< sub(as[i],bs[i]) << endl;
						break;
				case '*':cout  << i+1 << ".\t" << as[i] << "  ��  " << bs[i] << "  =  "
						<< mutip(as[i],bs[i]) << endl;
						break;
				case '/':cout  << i+1 << ".\t" << as[i] << "  ��  " << bs[i] << "  =  ";
					printf("%.2f\n",division(as[i],bs[i]));
			}
		}
	}
	return 0;
}

int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	gcd(b,a%b);
}

int addtion(int a,int b,int c,int d)
{
	int n=b*d;
	int m=a*d+b*c;
	if(m%n)
	cout << m/gcd(m,n) << "/" << n/gcd(m,n);
	else
	cout << m/n;
}

int sub(int a,int b,int c,int d)
{
	int n=b*d;
	int m=a-c;
	if(m%n)
	cout << m/gcd(m,n) << "/" << n/gcd(m,n);
	else
	cout << m/n;
}

int mutip(int a,int b,int c,int d)
{
	int n=b*d;
	int m=a*c;
	if(m%n)
	cout << m/gcd(m,n) << "/" << n/gcd(m,n);
	else
	cout << m/n;
}

int division(int a,int b,int c,int d)
{
	int n=b*c; 
	int m=a*d;
	if(m%n)
	cout << m/gcd(m,n) << "/" << n/gcd(m,n);
	else
	cout << m/n;
}

void save(int *as,int *bs,int *cs,int* ds,char *ss,int i,int a,int b,int c,int d,char e)
{
	as[i]=a;
	bs[i]=b;
	cs[i]=c;
	ds[i]=d;
	ss[i]=e;
}

int Float()
{
	//��������� 
	cout << "��������Ҫ���ɶ�������������?������1~100" << endl;
	int num;
	cin >> num;
	int* as=new int[num];
	int* bs=new int[num];
	int* cs=new int[num];
	int* ds=new int[num];
	char* ss=new char[num];
	for(int i=0;i<num;i++)
	{
		int a,b,c,d;
		a=1+rand()%9;
		b=1+rand()%9;
		c=1+rand()%9;
		d=1+rand()%9;
		switch(rand()%4)
		{
			case 0:cout  << i+1 << ".\t" << a << "/" << b << "  +  " << c << "/" << d << "  =";
					//	addtion(a,b,c,d);
					save(as,bs,cs,ds,ss,i,a,b,c,d,'+');
					    cout<< endl;
						break;
			case 1:cout  << i+1 << ".\t" << a << "/" << b << "  -  " << c << "/" << d << "  =";
				//		sub(a,b,c,d);
						cout << endl;
						save(as,bs,cs,ds,ss,i,a,b,c,d,'-');
						break;
			case 2:cout  << i+1 << ".\t" << a << "/" << b << "  ��  " << c << "/" << d << "  =";
				//		mutip(a,b,c,d);
						cout << endl;
						save(as,bs,cs,ds,ss,i,a,b,c,d,'*');
						break;
			case 3:cout  << i+1 << ".\t" << a << "/" << b << "  ��  " << c << "/" << d << "  =";
				//		division(a,b,c,d);
						cout << endl;
						save(as,bs,cs,ds,ss,i,a,b,c,d,'/');
						break;
		}
	}
	cout << "����Ҫ�������y/n��";
	char ch;
	int ok=0;
	do
	{
		if(ok)
		cout << "�����������������:" << endl;
		cin >> ch;
	}while(ch!='y'&&ch!='n');
	if(ch=='y')
	{
		for(int i=0;i<num;i++)
		{
			switch(ss[i])
			{
				case '+':cout  << i+1 << ".\t" << as[i] << "/" << bs[i] << "  +  " << cs[i] << "/" << ds[i] << "  =  ";
						addtion(as[i],bs[i],cs[i],ds[i]);
					    cout<< endl;
					    break;
				case '-':cout  << i+1 << ".\t" << as[i] << "/" << bs[i] << "  -  " << cs[i] << "/" << ds[i] << "  =  ";
						sub(as[i],bs[i],cs[i],ds[i]);
						cout << endl;
						break;
				case '*':cout  << i+1 << ".\t" << as[i] << "/" << bs[i] << "  ��  " << cs[i] << "/" << ds[i] << "  =  ";
						mutip(as[i],bs[i],cs[i],ds[i]);
						cout << endl;
						break;
				case '/':cout  << i+1 << ".\t" << as[i] << "/" << bs[i] << "  ��  " << cs[i] << "/" << ds[i] << "  =  ";
						division(as[i],bs[i],cs[i],ds[i]);
						cout << endl;
						break;
			}
		}
	}
	return 0;
}

int main()
{
	cout << "���ǽ�Ҫ����Сѧ�����������Ŀ" << endl
		 << "��ô��ѡ����Ҫ��������Ҫ�󡪡�" << endl;
	cout << "a.������Ϊ����" << endl
	 	 << "b.������Ϊ����" << endl;
	char ch=' ';
	int ok=0;
	do
	{
		if(ok)
		cout << "�����������������:" << endl; 
		ok=1;
		cin >> ch;
	}while(ch!='a'&&ch!='b');
	srand((unsigned int)time(NULL));
	switch(ch)
	{
		case 'a':Int();
		break;
		case 'b':Float();
		break;
	}
	return 0;
}
