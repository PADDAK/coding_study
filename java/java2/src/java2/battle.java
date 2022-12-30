//캡슐,상속,추상,오버로딩,오버라이딩
import java.util.InputMismatchException;
import java.util.Scanner;

class Tribe{		//종족선택클래스
	protected int tribeNum;
	
	public Tribe() {
	}
	
	public void setTribeNum(int tribeNum) {
		this.tribeNum=tribeNum;
	}
	
	public int getTribeNum() {
		return tribeNum;
	}
	
//	public void select() {
	public void select(Scanner sc) {
		while(true) {
			try{
//				Scanner sc=new Scanner(System.in);		//sc객체에서 예외발생하는데 while문에또 접근하려해서 무한루프발생 try안에 넣자
				tribeNum=sc.nextInt();
				if(tribeNum==1) {
					System.out.println("동물선택!");
					break;
				}
				else if(tribeNum==2) {
					System.out.println("사람선택!");
					break;
				}
				else if(tribeNum==3) {
					System.out.println("식물선택!");
					break;
				}
				else {
					System.out.print("제대로고르자!(1.동물 2.사람 3.식물):");
				}
				//수정
				
			}
			catch(InputMismatchException e) {
				System.out.println("숫자만쓰자!(1.동물 2.사람 3.식물):");
			}
		}
	}
}

class MyTribe extends Tribe{
	MyTribe(){
	}
	private String my;
	public void setMy(String my) {
		this.my=my;
	}
	public String getMy() {
		return my;
	}
	//이거틀
//	void check(String my) {
//		if(tribeNum==1) {
//			this.my="동물";
//		}
//		else if(tribeNum==2) {
//			this.my="사람";
//		}
//		else {
//			this.my="식물";
//		}
//	}
	void check(int tribeNum) {
	if(tribeNum==1) {
		this.my="동물";
	}
	else if(tribeNum==2) {
		this.my="사람";
	}
	else {
		this.my="식물";
	}
}
}
class ComputerTribe extends Tribe{
	ComputerTribe(){
	}
	private String computer;
	public void setComputer(String computer) {
		this.computer=computer;
	}
	public String getComputer() {
		return computer;
	}
	
	void check(String computer){
		if(tribeNum==1) {
			this.computer="동물";
		}
		else if(tribeNum==2) {	
			this.computer="사람";
		}
		else {
			this.computer="식물";
		}
	}
}
public class battle {
	public static void main(String[] args) {
	Tribe tribe=new Tribe();		
	MyTribe myTribe=new MyTribe();
	ComputerTribe computerTribe=new ComputerTribe();
	
	Scanner sc=new Scanner(System.in);
	
	System.out.println("=======시작=======");
	System.out.print("선택(1.동물 2.사람 3.식물):");
	tribe.select(sc);
	System.out.println("----"+tribe.getTribeNum());
	
	System.out.print("상대선택(1.동물 2.사람 3.식물):");
	tribe.select(sc);
	//수정
	myTribe.check(tribe.getTribeNum());
//	System.out.printf("	%s vs %s \n",myTribe.getMy(),computerTribe.getComputer());
	System.out.printf("	%s vs %s \n",myTribe.getMy(),computerTribe.getComputer());
	
	System.out.println("=====파일끝남=====");
	sc.close();
	}
}