> ex12 = read.csv("c:/data/ex1-2.csv")
    # csv 파일을 ex12 객체에 저장

> head(ex12, 3)
  id math physics
1  1   66      70
2  2   64      68
3  3   48      46
    # ex12 파일에 3열까지 프린트(확인용)

> cor(ex12$math, ex12$physics)
    # ex12 객체의 math, physics 변수의 상관계수

> apply(ex12, 2, var)
    # ex12 데이터프레임의 각 열에 대해 분산을 계산
    # var: 적용할 함수, 분산을 계산하는 함수
    # 데이터가 평균으로부터 얼마나 퍼져있는지를 나타내는 통계량,
    #표준편차와 관련있는 개념이며 표준편차는 분산의 제곱근으로,
    #데이터가 평균 주변에 얼마나 퍼져있는지를 측정하는 통계량

> summary(ex12)
    # 평균,표준편차,중앙값,제1사분위수,제3사분위수,최솟값,최대값을 한번에 보여주는 명령어(다섯수치요약)

> plot(ex12$math, ex12$physics, pch = 19, col = "blue", main ="Scatter Plot")
    # 산점도 그래프 생성 ex12$math = x축 ex12$physics = y축,
    #'pch=19'는 점의 모양 'col="blue"는 점의 색상 'main'은 그래프의 제목을 나타냄

> abline(lm(ex12$math~ex12$physics), col = "red")
    # 산점도 그래프에 선형 회귀선 추가 'col=red'는 회귀선의 색상

> identify(ex12$math, ex12$physics, labels = row.names(ex12))
    # 산점도 그래프 상의 데이터 포인트를 클릭하여 데이터를 식별하는 데 사용,
    #각 데이터 포인트를 클릭하면 해당 데이터 포인트의 좌표와 행 이름이 표시