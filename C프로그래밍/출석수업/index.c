#include <stdio.h>
// C에서 <stdio.h> 헤더 파일은 표준 입출력 함수를 제공
// 이것을 포함해야 'printf','scanf'와 같은 입출력 함수를 사용할 수 있다. react 에서 외부모듈을 가져올때 import 하는것과 유사하다고 이해하면 된다.

int main(void)
{
    int score;

    print("0점에서 100점 사이의 점수를 입력하세요\n");
    scanf("%d", &score);

    if(score >= 0 && score < 70)
        printf("%d점은 F학점입니다.\n", score);
    else if(score >= 60 && score < 70)
        printf("%d점은 D학점입니다.\n", score);
    else if(score >= 70 && score < 80)
        printf("%d점은 C학점입니다.\n", score);
    else if(score >= 80 && score < 90)
        printf("%d점은 B학점입니다.\n", score);
    else if(score >= 90 && score <= 100)
        printf("%d점은 A학점입니다.\n", score);

    return 0;

}

int main(void){
    int score;

    print("0점에서 100점 사이의 점수를 입력하세요\n");
    scanf("%d", &score);
    // 'scanf' 함수는 표준 입력 데이터를 읽어오는 함수
    // 즉 사용자에게 정수값을 입력받아 '&score' 변수에 저장 '%d' 서식 사용자를 사용하여 'scanf'에게 사용자가 입력한 값이 정수임을 알림
    // '%d' 의 경우 정수를 나타내는 포맷지정자 기본적으로 바꿀 수 있는 변수명 같은게 아님, 부동소수점 수를 나타내는 "%f" 지정자도 있다.

    switch(score / 10) // score 를 10으로 나누어 각각의 학점 범위를 처리
    {
        case 10:
        case 9:
        // score 의 값이 10으로 나누었기 때문에 몫이 10인 경우와 몫이 9인경우 동일하게 A학점 처리
            printf("%d점은 A 학점입니다. \n", score);
            break; 
        case 8:
            prinf("%d점은 B 학점입니다.\n", score);
            break;
        case 7:
            printf("%d점은 C 학점입니다.\n", score);
            break;
        case 6:
            printf("%d점은 D 학점입니다.\n", score);
            break;
        default: // 모든 case 에 부합하지 않을때 
            if(score >= 0 && score < 60)
                printf("%d점은 F학점입니다.\n", score);
            else
                printf("입력된 점수가 범위를 벗어났습니다.\n");
    }
    return 0;
    // 'return 0;'은 프로그램의 종료 코드를 나타냄 
    // 프로그램이 성공적으로 종료되었음을 나타내며, 대개의 경우 운영체제 또는 실행환경에 0값을 반환
}
