#include <stdio.h>

void menu();	//함수선언
void cal();
	
void main() { 	//메인함수
 menu();		//메뉴함수실행
 cal();		//계산함수실행
}

void menu() {	//메뉴함수
    printf("----------------------------\n");
    printf("  원리합계 계산 프로그램    \n");
    printf("           made by 동건     \n");
    printf("----------------------------\n");
}

void cal() {	//계산함수
    
    int add = 0;  //매년 초 적립할 돈의 액수
    int year = 0; //몇년동안 적립할지
    int i = 0; 	//반복문에 쓰이는 변수
    float addp = 0.00;     //연이율
    float total = 0.0;	//원리합계 총액
    float cal1 = 0.00;	//계산 1
    float cal2 = 1.0;	//계산 2
    
    printf("\n매년초 적립할 돈의 액수를 입력하세요 : ");
    scanf("%d", &add);
    printf("연이율을 입력하세요 (%%말고 소수로) : ");
    scanf("%f", &addp);
    printf("몇년동안 적립하시겠습니까? : ");
    scanf("%d", &year);
    printf("\n계산중입니다.\n");

    for(i=0; i<year; i++) {
        cal2 = cal2 * (1+addp); //지수를 계산하기위한 식
    }

    cal1 = add*(1+addp)*(cal2 - 1); //등비수열의 합 공식 분자부분
    total = cal1 / addp;		//등비수열의 합 공식
    printf("%d년말의 적립금의 원리합계 = %8.2f원\n", year, total); //원리합계 출력
    printf("%d년말의 이자로 불린 금액 = %8.2f원", year, total - (add*year)); //이자액 출력
}
