1. Output: 14
2. Output: 9 1
3. Output: -2.333333
4. Error will occur as variable p is aconstant.
5. Output: 2  2  2  2  2  2  3  4  6  5
6. Output: Hello World
7. #include <stdio.h>

   void main(){
	 int n,i,j,k;
	 printf("Enter n:");
	 scanf("%d",&n);
	 for (i = 1; i <= n; i++){
		for (k = 0; k <n-i;k++){
				printf(" ");
			}
		for (j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	 }
   }
8. #include <stdio.h>

  int main(){	
	int i, first = -1;
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(int);
    int x = 3;
    for (i = 0; i < n; i++) {
        if (x != arr[i]){
            continue;
    	}
        if (x == arr[i]){
        	first = i;
        	break;
    	}	
    }
    printf("%d",first);
  }
9. Output: umar
10. Output: 64

