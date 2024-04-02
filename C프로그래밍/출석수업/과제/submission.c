#include <stdio.h> // 표준 입출력 함수를 제공 받기 위해 헤더파일 포함

int main(void){ // 메인 함수 선언
    int jumsu; // 입력 받은 값을 저장할 변수 선언
    
    // 이름과 학번 출력
    printf("이름: 임준우\n");
    printf("학번: 202434-363447\n\n");

    printf("0점에서 100점 사이의 점수를 입력하세요\n");
    scanf("%d", &jumsu); // scanf 함수를 이용해 jumsu의 주소를 전달

    switch(jumsu / 10) // jumsu 를 10으로 나누어 각각의 학점 범위를 처리
    {
        case 10:
        case 9:
        // jumsu 의 값이 10으로 나누었기 때문에 몫이 10인 경우와 몫이 9인경우 동일하게 A학점 처리
            printf("%d점은 A 학점입니다. \n", jumsu);
            break; 
        case 8:
            printf("%d점은 B 학점입니다.\n", jumsu);
            break;
        case 7:
            printf("%d점은 C 학점입니다.\n", jumsu);
            break;
        case 6:
            printf("%d점은 D 학점입니다.\n", jumsu);
            break;
        default: // 모든 case 에 부합하지 않을때 
            if(jumsu >= 0 && jumsu < 60)
                printf("%d점은 F학점입니다.\n", jumsu);
            else
                printf("입력된 점수가 범위를 벗어났습니다.\n");
    }
    return 0; // 프로그램 종료를 나타냄
}