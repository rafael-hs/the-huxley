#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
	int n, v1, d1, v2, d2, r2, dt1;
	scanf("%d", &n);
	while(n){
		scanf("%d %d %d %d", &v1, &v2, &d1, &d2);
		int A = (int)ceil((double)v1/(double)d2);
		bool clodesWon = 0;
		register int i;
		for(i = 0; i < A; i++){
			clodesWon |= (v2 <= (A-i)*(d1+50*i));
		}
		puts(clodesWon ? "Clodes" : "Bezaliel");
		n--;
	}
}