# 인터넷

## 학습 목표

- 인터넷이 무엇인지 설명할 수 있다(의미, 역사, 특성)
- 인터넷 주소와 도메인 개념을 설명할 수 있다.
- DNS(Domain Name System) 서버의 기능을 설명할 수 있다.
- URL 이 무엇인지 설명할 수 있다.
- 인터넷 서비스의 종류를 나누어 설명할 수 있다.
> 전자우편, FTP, Telnet, Usenet, 월드 와이드 웹
- 인터넷 응용 분야를 3가지 이상 설명할 수 있다.

## 언터넷이란

- 전세계적인 정보 통신망
> `네트워크의 네트워크`

- INTERNET = INTERconnected NETwork

- **ARPANET**
> 인터넷의 시초, ARPA(Advanced Research Project Agency) 에서 1968년에 계획, 1969년에 구축한 ARPANET

- **TCP/IP** (패킷 교환용 통신 프로토콜)

## 인터넷의 특성

- 개방구조
> 프로토콜, 제도, 규격 등이 완전히 개방된 통신망이다. 

- 호스트 간의 평등성
> 인터넷에 연결된 모든 컴퓨터는 정보의 송수신에서 대등한 위치에 놓인다.

- 독자적인 주소 할당
> 인터넷에 연결된 모든 컴퓨터는 고유한 IP주소를 갖는다.

## 인터넷 주소
### Internet Protocol Address
- IP(Internet Protocol) 주소
    * "인터넷에 연결된 모든 컴퓨터는 고유한 IP 주소를 갖는다"

- IPv4 (Internet Protocol Version 4)
    * 32 비트(4byte)를 8비트씩 (0~255) 4등분으로 나누어 각 부분을 점(.) 으로 구분 10진수로 표시
    * NIC (Network Information Center)에서 할당하고 관리
    * 0.0.0.0 ~ 255.255.255.255, 약 43억(2^32)개의 주소 사용 가능
    * A, B, C, D 등의 클래스 단위 비 순차적 할당
    * **주소 고갈 현상** 발생

- IPv6 (Internet Protocol Version 6)
    * 차세대 인터넷 통신 규약 - IPng(IP next generation)라고도 함
    * 16비트 씩 8부분으로 16진수로 표시 콜론(:)으로 구분(2002:0221:ABCD:DCBA:0000:0000:FFFF:4002)
    * 주소 길이가 128비트(16byte)로 약 340조(2^128)개의 주소를 제공
    * 네트워크 규모, 단말기 수에 따른 순차적 할당

### 도메인 이름(Domain Name)
- 이너텐ㅅ에 연결되어 있는 호스트 컴퓨터의 주소를 나타내는 IP 주소는 숫자로 구성되어 있음
- 도메인 이름은 IP 주소의 각 자리의 숫자를 사람이 기억하기 쉬운 영문자로 바꾼 것 (203.232.172.32 -> www.net.ck.kr)

### 도메인 주소 계층 구조 예
```
(.co) company
(.go) government
(.or) organization
(.ac) academy
등등
```

### DNS (Domain Name System)
- 사용자가 도메인 이름을 사용하여 호스트 컴퓨터에 연결하고자 할 때 DNS 는 도메인 이름과 그에 대응하는 IP 주소를 저장한 데이터베이스를 이용하여, **해당 IP 주소로 변환하여 연결**시켜줌
- 도메인 이름을 입력했을때 그것에 대응하는 IP 주소를 반환해서 연결 시켜주는 서버

### URL (Uniform Resource Locator)
- 인터넷에서 특정 전산 자원을 지정하는 주소를 일관 되게 표현하는 방식
- URL 의 형식
    * 프로토콜 이름
    * 도메인 이름
    * 해당 파일의 위치를 나타낸 경로 (ex- http://www.net.co.kr)

### FTP
- 인터넷상에서 컴퓨터 간에 파일을 교환하기 위한 표준 프로토콜
- TCP/IP 응용 프로토콜 중의 하나
- FTP(File Transfer Protocol)서비스


### 월드 와이드 웹
- WWW(World Wide Web)
    * 1989년 스위스의 유럽입자물리연구소(CERN)에서 제안한 광역정보 시스템
    * 목적 : 네트워크상에 **하이퍼텍스트(hypertext / 링크등을 통해 정보를 순차적으로 보는 것이 아닌 다른 정보를 다방면으로 볼 수 있는 것)**를 구축해 모든 정보를 끊임 없이 엑세스할 수 있게 하는것

- HTTP (Hyper-Text Transfer Protocol)
    * 하이퍼 텍스트 파일 송수신용 응용 프로토콜
    * HTTP 입장에서 웹 브라우저는 클라이언트
    * HTML(Hyper-Text Markup Language), 웹페이지 작성 언어
    * HTTPS는 HTTP에 보안 기능을 추가한 것이다. https는 SSL/TLS 프로토콜을 사용하여 데이터를 암호화하기 때문에 보안성이 높다.

## 인터넷 응용
### 전자상거래 시장
- 생산자(producer), 중개인(intermediaries), 소비자(consumers)가 디지털 통신망을 이용하여 상호 거래하는 시장

| B to B | B to C | C to C|
|---|---|---|
|기업간의 거래 (Business to Business)|기업/ 소비자 간의 거래 (Business to Consumer)|소비자 간의 거래 (Consumer to Consumer)|

### 인터넷 전화
- VoIP (Voice over Intenet Protocol)을 활용하여 일반 전화망에서 이루어졌던 음성 서비스를 IP 망를 기반으로 패킷 데이터를 통해 음성 통화를 구현하는 통신기술
    * 케이블을 통해 여러 명이 동시에 사용 가능
    * 확장성이 뛰어남
    * 기존 전화에 비해 요금이 매우 저렴함
    * skype, kakaotalk, line 등

### IPTV
- 인터넷 프로토콜 텔레비전(Internet Protocol TV)
    * 인터넷 프로토콜(IP: Internet Protocol)을 사용하여 소비자에게 디지털 텔레비전 서비스를 제공하는 시스템
    * 시청자가 자신이 편리한 시간에 보고 싶은 프로그램을 선택해서 볼 수 있음(VOD: Video on Demand)
    * PC 모니터 대신 텔레비전을 이용하고, 마우스 대신 리모컨을 이용함
    * OTT service(over-the-top media service) 인터넷을 통해 방송 프로그램, 영화, 교육등 각종 미디어 콘텐츠를 제공하는 서비스 (유튜브 등등)

### SNS
- Social Network Service(social media)


## 정리
### 인터넷 개요
- 인터넷이란?
    * 전 세계적인 정보 통신망
        * "network of networks"
    * INTERconnected NETwork
    * TCP/IP 프로토콜
- 인터넷의 역사 
    * ARPANET
- 인터넷의 특성
    * 개방 구조
    * 호스트 간의 평등성
    * 독자적인 주소 할당 (IP 주소)

### 인터넷 주소
- Internet Protocol 
    * 독자적인 주소(IP 주소; 숫자)
        * IPv4(4Byte; 10진수 4개, ".")
        * IPv6(16Byte; 16진수 8개, ";")
- 도메인 이름
    * IP 주소를 숫자 대신 의미있는 단어로 표현
- DNS
    * 도메인 이름을 IP 주소로 변환
- URL
    * 인터넷상의 특정 자원에 대한 주소
    * 계층적으로 표현
        * protocol
        * domain name
        * file

### 관련 영상
[What is the Internet?(by Vinton Cerf)(3:44)](https://www.youtube.com/watch?v=Dxcc6ycZ73M)

