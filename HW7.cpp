#include <iostream>
using namespace std;

int main(){
	int x, y;
	int i, j;
	int arr[100000];
	
	do{
		cin >> x >> y ;
	}while((y-x)>5000 || x>100000 || y>100000); //input value
	
	
	for(i=0, j=x; i<=(y-x+1), j<=y; i++, j++)
	{
		arr[i] = j*j;
		
		//cout << arr[i] << endl; //test statement
	}
	
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
	
	cout << sum << endl;

	return 0;
}
