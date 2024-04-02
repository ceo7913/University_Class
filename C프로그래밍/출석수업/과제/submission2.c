#include <stdio.h>

int main(void)
{
    // 이름과 학번 출력
    printf("이름: 임준우\n");
    printf("학번: 202434-363447\n\n");

    int num = 0; // 입력 받은 값을 넘겨줄 변수 선언

    // 변수 선언 후 0으로 초기화
    int odd_total_num = 0;
    int even_total_num = 0;

    printf("1~100 사이의 숫자를 입력하세요: \n");
    scanf("%d", &num); // 사용자로부터 정수를 입력받고 입력받은 값은 &num(num)에 저장

    if(num <= 100){ // num 이 100이하면 코드 실행
        while (num >= 1) // num 이 1이상이라면 계속 반복 실행
        {
            if(num % 2 == 1){ // 홀수인지 확인하는 조건식
                odd_total_num = odd_total_num + num; // 홀수라면 odd_total_num에 num을 더하는 조건식
            }else if(num % 2 == 0){ // 짝수인지 확인하는 조건식
                even_total_num = even_total_num + num;// 짝수라면 even_total_num 에 num을 더하는 조건식
            }
            num-- ; // 한번 반복할때 마다 1씩 감소
        }

        // while 문이 종료되면 저장 된 값을 출력
        printf("홀수 값의 총 합계: %d \n", odd_total_num); 
        printf("짝수 값의 총 합계: %d \n", even_total_num);
    }else {
        // 입력된 값이 100이 넘는 경우 예외처리
        printf("입력값이 100이 넘습니다.");
    }

    return 0; // 정상적으로 종료되었음을 알림
}