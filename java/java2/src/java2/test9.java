//overloading
import java.util.Scanner;

class B{		//오버로딩
	int add(int a,int b) {
		return a+b;
	}
	double add(double a,int b) {
		return a+b;
	}
	double add(double a,double b) {
		return a+b;
	}
	double add(int a,double b) {
		return a+b;
	}
}
public class test9{
	public static void main(String[] args) {
		B a=new B();
		
		Scanner sc=new Scanner(System.in); //10개를 더할수도 있고 5개를 더할수도 있는데 이건 무슨개념이지 배열동적할당시켜서 입려받은거만큼배열이용하는건가
		System.out.println(a.add(sc.nextInt(),sc.nextInt()));		//근데 입력받는게 정수 실수 구분하는건 뭔개념이지
	}
}