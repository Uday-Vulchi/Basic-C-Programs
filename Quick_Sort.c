#include <stdio.h>
#include <stdlib.h>
void quickSort(int *a, int n)
{	
int i,j;
    if(n > 1){
	int t, p = a[0], r = n-1;
	for(i = n-1;i>=0;--i){
	    if(a[i] >= p){
		t = a[i];
		 j = i;
		while(j < r){
		    a[j] = a[j+1];
		    ++j;
		}
		a[r--] = t;
	    }
	}
	r++;
	quickSort(a, r);
	quickSort(a+r+1, n-r-1);
	 for(i= 0;i<n;++i){
	    printf("%d ",a[i]);
	}
	printf("\n");
    }
    }



int main()
{
    int t,i,a[100],z=1; 
    printf(" ENTER NO OF TEST CASES : ");
    scanf("%d", &t);
    while(z<=t){
    int n;
    printf(" ENTER SIZE OF ARRAY : ");
    scanf("%d", &n);
     printf(" ENTER ELEMENTS IN TO  ARRAY : ");
    for(i = 0;i< n;i++){
	scanf("%d",&a[i]);
    }
    quickSort(a,n);
     z++;
}
return 0;
}
