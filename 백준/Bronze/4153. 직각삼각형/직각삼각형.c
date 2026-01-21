#include<stdio.h>
#include<math.h>

int is_correct(int *a)
{
	int x[3], k, is;
	for(int i = 0 ; i<3 ; i++){
		k = 0;
		x[k++] = a[i];
		for(int j = 0 ; j<3 ; j++){
			if(j != i){
				x[k++] = a[j];
			}
		}
		if(x[0]*x[0] == (x[1]*x[1] + x[2]*x[2])) return 0;
	}
	return 1;
	
}
int main()
{
	int a[3];
	
	while(1){
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		getchar();
		if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		if(is_correct(a) == 1) printf("wrong\n");
		else printf("right\n");
	}
		
		
	return 0;
}