#include<stdio.h>
int num1[10][10];
int num2[10][10];
int num3[10][10];


int main(){
	int m, n;
	
	while (scanf("%d", &m )&& m != 0){
		int num = 0;
		scanf("%d", &n);
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &num1[i][j]);
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &num2[i][j]);
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				num3[i][j] = num1[i][j] + num2[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			int j;
			for (j = 0; j < n; j++){
				if (num3[i][j] != 0)
					break;
			}
			if (j == n)
				num++;
		}
		for (int i = 0; i < n; i++){
			int j;
			for (j = 0; j < m; j++){
				if (num3[j][i] != 0)
					break;
			}
			if (j == m)
				num++;
		}
		printf("%d\n", num);
	}


	return 0;
}
