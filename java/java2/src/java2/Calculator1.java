package java2;

import java.util.Scanner;							//스캐너사용
import java.util.InputMismatchException;			//정수입력해야되는데문자입력예외처리

public class Calculator1 {
	static char d;									//연산기호 전역변수로 선언
	public void Sum(int a,int b) {			//덧셈
		int c=a+b;
		System.out.printf("%d%c%d=%d",a,d,b,c);
	}
	public void Subtract(int a,int b) {		//뺄셈
		int c=a-b;
		System.out.printf("%d-%d=%d",a,d,b,c);
	}
	public void multiply(int a,int b){		//곱셈
		int c=a*b;
		System.out.printf("%d*%d=%d",a,d,b,c);
	}
	public void divide(int a,int b) {		//나눗
		int c=a/b;
		System.out.printf("%d/%d=%d",a,d,b,c);
	}
	public static void main(String[] args) {
		Scanner num=new Scanner(System.in);		//정수입력받기위해 스캐너생성
		int num1=num.nextInt();				//정수1 입력받기
		int num2=num.nextInt();				//정수2 입력받기
		
		Calculator1 result=new Calculator1();
		
		if(d=='+') {
			result.Sum(num1, num2);
		}
		else if(d=='-'){
			result.Subtract(num1, num2);
		}
		else if(d=='*'){
			result.multiply(num1, num2);
		}
		else {
			result.divide(num1, num2);
		}
		
		num.close();
	}
	
}