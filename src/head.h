#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void zapolnenie(){

	int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int pole[4][4];
	int index, i=0, j=0, k=0, l_arr;
	int x=0, o=0;
	srand(time(NULL));
//	printf("%d _______ %d",arr[14], arr[15]);
	while(k<15){
	    index =(rand() % (15-k));
//	    printf("%d \n",index);
	    
	    pole[i][j]=arr[index];
	    j++;
	    if (j == 4) {
		j=0;
		i++;
	    }
	    l_arr = 15 - index;
	    x = 0;
	    
	    while(x < l_arr){
		arr[index + x]= arr[index + (1 + x)];
		x++;
//		o=0;
//		while(o<(16-k)){
//		    printf("%d, ",arr[o]);
//		    o++;
//		}
//		printf("\n");
		}
	    k++;
	    }
//	    printf("\n");
//	    i=0;j=0;
//	    for (i=0;i<4;i++){
//		for (j=0;j<4;j++){
//		    printf("%d ",pole[i][j]);
//		    }
//		printf("\n");
//	    }
	}