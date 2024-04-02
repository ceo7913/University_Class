# - 세수 A,B,C 를 입력 받고 그 중 가장 큰 수를 출력하는 프로그램(max 사용 x)

# 세 개의 수 입력 받기
A = int(input("첫 번째 수를 입력하세요: "))
B = int(input("두 번째 수를 입력하세요: "))
C = int(input("세 번째 수를 입력하세요: "))

# 가장 큰 수 찾기
max_num = A  # 일단 A를 가장 큰 수로 설정

if B > max_num:  # B가 현재의 max_num보다 크면 max_num을 B로 업데이트
    max_num = B

if C > max_num:  # C가 현재의 max_num보다 크면 max_num을 C로 업데이트
    max_num = C

# 가장 큰 수 출력
print("가장 큰 수는:", max_num)