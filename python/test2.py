#물의 섭씨 또는 화씨 온도를 입력받아 섭씨 온도와 물의 상태를 판별하는 프로그램을 작성하시오. 단, 화씨 온도가 입력될 경우에는 섭씨 온도로 변환한다.
a=int(input("단위를 입력하시오(1:섭씨,2:화씨):"))
b=float(input("온도를 입력하시오:"))

if(a==1):
    result="섭씨"
    result1=b
else:
    result="화씨"
    result1=(b-32)*5/9

if(b>=100):
    result2="기체"
elif(b>0 and b<=100):
    result2="액체"
else:
    result2="고체"

print("물의",result,"온도:",result1,"\n상태:",result2)

print("{}"%result)