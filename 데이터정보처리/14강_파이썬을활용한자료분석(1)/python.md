# 파이썬을 활용한 자료분석(1)

## 학습개요

파이썬은 객체지향 프로그래밍 언어로 문법이 쉽고, 확장성이 좋아 데이터과학 분야에서 R과 더불어 널리 이용되고 있는 프로그램 언어이다. 이 강에서는 파이썬을 설치하는 방법, 파이썬 프로그래밍에 대하여 공부한다.

## 학습목표

- 파이썬을 설치하는 방법을 이해할 수 있다.
- Spyder 및 Jupyter Notebook을 사용할 줄 안다.
- 파이썬 언어를 사용할 수 있다.

### Pyhon 설치

[Anaconda](www.anaconda.com)

### Path 설정

프롬프트에서 명령어를 쉽게 접근할 수 있도록 설정

제어판 -> 시스템 및 보안 -> 시스템 -> 고급 시스템설정 ->
환경변수 -> 시스템 변수에서 Path 편집 -> 새로만들기에 아래 3가지 추가

```
C:\anaconda3\
C:\anaconda3\Scripts
C:\anaconda3\Library\bin
```

### pip

Python 패키지를 설치하고 관리하는 프로그램

- 패키지 설치하기 (Graphviz: 구글 검색 참조)

Dos 창에서

```
pip install mglearn
pip install graphviz
pip install pydot
pip install pydotplus
pip install tensorflow
```

한마디로 필요한 라이브러리 설치 명령어
