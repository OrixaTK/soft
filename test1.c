#include <stdio.h>
/**
 **	50までの整数のうち、3と5の倍数を表示し、その個数をカウントするプログラム
**/

int toBath(){
	
	int cou, ans;
	ans = 0;
	
	for( cou = 1; cou <= 50; cou = cou + 1 ){
		if( cou % 3 == 0 ){
			printf("%d\n", cou);
			ans = ans + 1;
		}else if( cou % 5 == 0){
			printf("%d\n", cou);
			ans = ans + 1;
		}
	}
	
	return ans;
}

int main() {
	
	int answerCheck = 0;
	
	answerCheck = toBath();

	printf("個数は%dですよ\n", answerCheck);
}