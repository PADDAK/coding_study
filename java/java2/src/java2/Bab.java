//n명의 사람들 돈모아서 밥사먹
//캡슐화 상속 오버로딩 오버라이딩 다떄려박기
import java.util.Scanner;

class Person{				//사람몇명인지클래스
	protected int person;		//클래스 상속할꺼여서 protected
	
	Person(){
	}
	
	Person(int person){
		this.person=person;
	}
	
	public void setPerson(int person) {
		this.person=person;
	}
	
	public int getPerson() {
		return person;
	}
	
}

class Money extends Person{		//각자 얼마냈는지클래스
	Scanner sc=new Scanner(System.in);
	
	public Money() {
	}
	
//	int money[]=new int[person];	//배열캡슐화하고 접근어떻게하지 원소하나하나 다해야되나
	int money[];
	
	public void money() {
		money=new int[person];			//이거때문에 안되고있엇슴 초기화한번에하지말고 메소드에 초기화
//		System.out.println("사람수:"+person);
//		System.out.println("배열길이:"+money.length);
		for(int i=0;i<money.length;i++) {
			System.out.print("얼마낼래?:");
			money[i]=sc.nextInt();
//			System.out.println();
		}
	}
//	public void money1() {
//		for(int i=0;i<money.length;i++) {
//			System.out.println(money[i]);
//		}
//	}
	public void money2() {
		int sum=0;
		for(int i=0;i<money.length;i++) {
			sum+=money[i];
		}
		System.out.printf("일단 다 걷었더니%d원이네",sum);
	}
	
}

public class Bab{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		Money KK=new Money();		
		System.out.print("몇명이니:");
//		int num=sc.nextInt();
//		KK.setPerson(num);
//		System.out.println("인원수:"+KK.getPerson());
		KK.setPerson(sc.nextInt());
		
		KK.money();
//		KK.money1();
		KK.money2();
	}
}
