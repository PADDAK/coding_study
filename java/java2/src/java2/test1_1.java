import java.util.Scanner;

class PP{
	private int num2;
	private String str;
	
	public void setA(int num2) {
		this.num2=num2;
	}
	public void setB(String str) {
		this.str=str;
	}
	public int getA() {
		return num2;
	}
	public String getB() {
		return str;
	}
}
public class test1_1 {
	public static void main(String[] args) {
		PP p=new PP();
		Scanner sc=new Scanner(System.in);
		
		p.setA(sc.nextInt());
		p.setB(sc.next());
		
		System.out.println(p.getA());
		System.out.println(p.getB());
	}
}
