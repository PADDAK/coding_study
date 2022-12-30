
import java.util.Scanner;					//뭐가 멤버,필드,인스턴스,레퍼던스,상수(항상final?),변수 구별
											//static이랑 final 먼차이
class rate{
	static final int USD=1300;					//static 모든 클래스 접근가능
	static final int JPY=958;
	static final int EUR=1380;
}

class result{
	public static void USD(int money){		//rate와 result가 왜 main이 속한 class에 들어가면안되는거
		System.out.println(money/(rate.USD)+"달러");
	}
	public static void JPY(int money) {
		System.out.println(money/(rate.JPY)+"엔");
	}
	public static void EUR(int money) {
		System.out.println(money/(rate.EUR)+"유로");
	}
}

public class hanoon1 {
	public static void main(String[] args) {
//		static int pp=3;					//메인메소드에서 static 선언안됨
//		int USD=500;		//위에 전역으로 해놨는데 이렇게하면 얘는 뭐가되는거
//		while(true) {
//			Scanner sc=new Scanner(System.in);
//			System.out.println("씨발련");
//		
//			int money=sc.nextInt();
//			System.out.print("번호선택(1:달러 2:엔 3:유로):");
//			int currency=sc.nextInt();
//		
//			if(currency==1) {
//				result.USD(money);
//			}
//			else if(currency==2) {
//				result.JPY(money);
//			}
//			else if(currency==3) {			//잘못입력시 while쓰지말고 예외처리로 다시쓰라고 해보기
//				result.EUR(money);
//			} else {
//				System.out.println("아니 빡통년아 다시.");
//				continue;
//			}
//			
//			System.out.print("더?(ㅇㅇ:1,ㄴㄴ:아무거나):");
//			int k=sc.nextInt();
//			if(k==1) {
//				continue;
//			}
//			else{			//while에 k넣고 k가 1이면 반복되게 하려하는데 안됨 이거는 while조건문 신경안쓰고 break 거는거아닌가
//				break;		//이렇게말고 부울함수로 종료되게해보기
//			}				
//		}	
//		
//		int k = 0;
//		while(k == 1) {
//			Scanner sc=new Scanner(System.in);		
//			
//			int money=sc.nextInt();
//			System.out.print("번호선택(1:달러 2:엔 3:유로):");
//			int currency=sc.nextInt();
//		
//			if(currency==1) {
//				result.USD(money);
//			}
//			else if(currency==2) {
//				result.JPY(money);
//			}
//			else if(currency==3) {			//잘못입력시 while쓰지말고 예외처리로 다시쓰라고 해보기
//				result.EUR(money);
//			}
//			
//			System.out.print("더?(ㅇㅇ:1,ㄴㄴ:아무거나):");
//			k=sc.nextInt();
//		}
		
		Scanner sc=new Scanner(System.in);
		do {
			int money=sc.nextInt();
			System.out.print("번호선택(1:달러 2:엔 3:유로):");
			int currency=sc.nextInt();
			int q = 0;
			switch(currency) {
			case 1: 
				cal.USD(money);
				break;
			case 2: 
				cal.JPY(money);
				break;
			case 3:
				cal.EUR(money);
				break;
			}
			
			
			System.out.print("더?(ㅇㅇ:1,ㄴㄴ:아무거나):");
		} while(sc.nextInt() == 1);
	}
	
}
