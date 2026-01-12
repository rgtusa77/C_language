#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, m, max, bagcount;
	
	scanf("%d", &n);
	
	max = n / 5;
	bagcount = -1;
	if(max > 0){
		int s = n % (5*max);
		if( s == 0 ){
			bagcount = max;
		}
		else if( s != 0){
			if(s % 3 == 0){
				bagcount = max + s/3;
			}
			if(s % 3 != 0){
				m = max;
				while(m > 0){
					m--;
					if((n - 5*m)%3 == 0){
						bagcount = m + (n - 5*m)/3;
						break;
					}
				}
			}
		}
	}
	else{
		if(n % 3 == 0 || n % 5 == 0){
			bagcount = 1;
		}
	}
	
	printf("%d", bagcount);
	
	return 0;
}