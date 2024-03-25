## 실습
- R
```
> m=c(10,20,30,40,50,60,70)
> p <- c(11,22,33,44,55,66,77)
> m
[1] 10 20 30 40 50 60 70
> p
[1] 11 22 33 44 55 66 77
> cor(m,p)
[1] 1
> plot(m,p)
> plot(m,p,pch=30, col="GREEN", main="scatter plot of m,p")
경고메시지(들): 
1: plot.xy(xy, type, ...)에서: pch의 값 '30'는 구현되지 않았습니다
> plot(m,p,pch=10,col="GREEN", main="scatter plot of m,p")
> abline(lm(p~m), col="red")
> identify(m,p)

```
- spyder
```
# python 을 이용한 데이터 분석
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

ex12 = pd.read_csv("c:/data/dataintro/ex1-2.csv")
ex12
ex12.shape

ex12.head()
ex12.head(3)

cols = ['math', 'physics']
exdata = ex12[cols]
exdata
exdata.describe()

// 산점도
plt.scatter(exdata.math, exdata.physics)
// 상관계수
np.corrcoef(exdata.math, exdata.physics)
```

- KOSIS 국가통계포털(http://kosis.kr)

산포도 측도: 변동계수, 범위
- 변동계수(coefficient of variantion): 자료의 개수나 측정단위가 다른 두 개 이상의 자료에 대한 표준편차를 바교하는 것은 무의미함. 이러한 경우에 사용하는 측도가 표준편차를 평균으로

산포도 측도: 사분위수범위
- p%
```
> aval = c(5,4,7,6,8,10,11,0,7,18)
> sd(aval)
[1] 4.788876
> IQR(aval)
[1] 4.25
> summary(aval)
    Min. 1st Qu. MEdian Mean 3rd Qu.  Max
```

### 연속형 자료 그래프: 히스토그램
- 히스토그램(histogram): 연속적인 자료를 일정한 계급으로 나누어 각 계급에 속한 도수들을 정리한 도수분포표를 이용하는 작성한 그래프
- 히스토그램은 연속인 자료의 분포를 살펴볼 때 이용되는 그래프로서 많은 양의 자료에 적합
```
> a = rnorm(200)
> hist(a, col="RED")
```

### 연속형 자료 그래프: 줄기-잎 그림
- 줄기-잎 그림(stem-and-leaf plot): 분포의 대략적인 형태를 살펴보기 위하여 작성되는 그래프로 군집의 존재여부, 집중도가 높은 구간, 대칭성의 여부, 자료의 범위 및 산포, 특이 값의 존재 여부 등을 파악하는데 이용됨.

- 예: 점수자료  54 57 55 23 51 64 90 51 52 43 15 10 82 74 54 78 37 73 52 48 41 33 52 30 41 51 18 39 46 28 53 44 46 56
 28 58 29 58 67 35 25 38 61 53 23 73 69 47 41 45 77 56 89 28 54 99 10 43 35 24 21 23 67 14 53
 ```
 > score = scan("c:/data/dataintro/score.txt")
 > stem(score)
  The decimal point is 1 digit(s) to the right of the |

  1 | 00458
  2 | 1333458889
  3 | 0355789
  4 | 11133456678
  5 | 111222333444566788
  6 | 14779
  7 | 33478
  8 | 29
  9 | 09
 ```

### 엑셀 기초활용
#### 함수 사용
- 함수 사용 예: if문을 사용하는 예
```
통계학 점수가 60점 이상이면 '합격', 60점 미만이면 '불합격' 표시
주어진 조건을 평가하여 참인 경우와 거짓인 경우에 다른 값을 표시

구문: =IF(주어진 조건, value if true, valus if false)
* 주어진 조건: 참 또는 거짓으로 판정되는 값이나 식
* value if true: 주어진 조건이 참일 때 얻게 되는 결과값
* value if false: 주어진 조건이 거짓일때 얻게 되는 결과값
```
- 함수 사용법
1. D1 셀에 변수명으로 "합격여부(통계학)" 라고 입력하고, D2 셀에 
    =IF(B2<60, "불합격","합격")라고 입력
2. 나머지 셀은 채우기 기능을 이용하여 쉽게 처리

- 엑셀을 사용한 데이터 처리 예
