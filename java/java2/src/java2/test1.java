import java.util.Scanner;

class KK{
	int num1;			//이렇게하면안됨 자바목적(캡슐화)를 벗어남 
	private int num2;	//이렇게 캡슐화하는게 정석
	
	public void set(int num2) {			//set 변수값받는역할->인자필
		this.num2=num2;
	}
	public int get() {					//get 변수값반환역할->리턴필
		return num2;
	}
}

public class test1{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		KK k=new KK();
		
		k.num1=sc.nextInt();			//이렇게하지말자 캡슐화를 벗어나는거
		k.set(sc.nextInt());			//이렇게 캡슐화를 한거에서 set을 통해 변수값입력 이게정석
		
		System.out.println(k.num1);		//출력은되지만 캡슐화벗어나는거 하지말
		System.out.println(k.get());	//set으로 입력된게 num2에 저장되고 get의 num2로 리
		
		sc.close();	
	}
}