#include<stdio.h>
#include<stdlib.h>

int array[2000001] = {0};

int main()
{
	
	int n, count, end_idx, first_idx, final;
	
	scanf("%d", &n);
	
	count = n;
	first_idx = 0;
	end_idx = n-1;
	for(int i = 0 ; i<n ; i++){
		array[i] = i+1;
	}
	
	if(n == 1){
		printf("%d", array[0]);
		return 0;
	}
	while(1){
		
		first_idx++;
		count--;
		if(count == 1){
			final = array[first_idx];
			break;
		}
		array[end_idx + 1] = array[first_idx];
		end_idx++;
		first_idx++;
	}
	
	printf("%d", final);
	
	return 0;
}
	