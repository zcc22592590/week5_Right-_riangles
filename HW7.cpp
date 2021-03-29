#include <iostream>
using namespace std;

int main(){
	long long int x, y;
	long long int i, j, k;
	//long long int arr[10000];
	//////////////////////////////version5////////////////////////////////////	

	while(cin >> x >> y)
	{
		long long int arr[y+1];
		for(i=x; i<=y; i++)
		{
			arr[i] = i*i; //[4, 9, 16, 25, 36...]
		}
		long long int sum = 0;
		long long int a2, b2, c2;
		long long int sideA = y-2;
		
		
		for(i=x; i<=sideA; i++)
		{
			a2 = arr[i];
			j = i+1;//4, 5, 6, 7, 8, 9
			k = j+1;//5, 6, 7, 8, 9, 10
			while(k <= y)
			{
				b2 = arr[j];
				c2 = arr[k];
				while(arr[i] + arr[j] > arr[k]) k++;
				if(a2 + b2 == c2 && k<=y) sum++;
				j++;
			}

		}
		cout << sum << endl;
	}
		
	

	//////////////////////////////version4////////////////////////////////////
	/* 
	while(cin >> x >>y)
	{
		for(i=x; i<=y; i++)	{
		arr[i] = i*i; //[4, 9, 16, 25, 36...]
		}
	
		long long int sum = 0;
		int a2, b2, c2;	
		int k, j;
		int sideA = y-2; // the shortest side
		int sideB = y-1; // second side
		
		for(i=x; i<=sideA; i++)
		{
			a2 = arr[i];//3, 4, 5, 6, 7, 8
			for(j=(i+1); j<=sideB; j++)
			{
				b2 = arr[j];//4, 5, 6, 7, 8, 9
				for(k=(j+1); k<=y; k++)
				{
					c2 = arr[k];//5, 6, 7, 8, 9, 10
					if(a2 + b2 == c2) sum++;
				}
			}
		}
		cout << sum << endl;
	}
	*/
	
	//////////////////////////////version3////////////////////////////////////
	/*
	cin >> x >> y;
		
	for(i=x; i<=y; i++){
		arr[i] = i*i; //[4, 9, 16, 25, 36...]
	}
	
	int sum = 0;
	int a2, b2, c2;
	int length = y-x;
	int sideA = x+2; // the longest side
	int sideB = x+1; // second side
	int k;
	
	for(i=y; i>=(sideA); i--)
	{
		c2 = arr[i];//y ~ x, EX: 10, 9, 8, 7, 6, 5
		int sideB_init = i-1;
		for(j=sideB_init; j>=sideB; j--)
		{
			b2 = arr[j];//sideB_init ~ sideB, EX: 9, 8, 7, 6, 5, 4
			int sideC_init = j-1;
			for(k=sideC_init; k>=x; k--)
			{
				a2 = arr[k];//sideC_init ~ x, EX: 8, 7, 6, 5, 4, 3
				if(a2 + b2 == c2) sum++;
			}
		}
		
	}
	*/
	
	//////////////////////////////version2////////////////////////////////////
	/*
	do{
		cin >> x >> y ;
	}while((y-x)>5000 || x>100000 || y>100000); //input value
	*/
	/*
	for(i=0, j=x; i<=(y-x+1), j<=y; i++, j++)
	{
		arr[i] = j*j;
		
		//cout << arr[i] << endl; //test statement
	}
	*/
	
	/*		
	int sum = 0;
	int a2, b2, c2;
	int k;
	for(i=(y-x); i>=2; i--)
	{
		c2 = arr[i];
		for(j=(i-1); j>=1; j--)
		{
			b2 = arr[j];
			for(k=(j-1); k>=0; k--)
			{
				a2 = arr[k];
				if(a2 + b2 == c2) sum++;
			}
		}
	}
	*/
	//////////////////////////////version1////////////////////////////////////
	
	/* 
	int a, b, c;
	for(c=y; c>=(x+2); c--)
	{
		//cout << "c: " << c << endl;
		c2 = c*c;
		for(b=(c-1); b>=(x+1); b--)
		{
			//cout << "b: " << b << endl;
			b2 = b*b;
			for(a=(b-1); a>=x; a--)
			{
				//cout << "a: " << a << endl;
				a2 = a*a;
				if(a2 + b2 == c2)	sum++;
			}

		}

	}
	*/
	//////////////////////////////////////////////////////////////////////////
	//cout << sum << endl;

}
