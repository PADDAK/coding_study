import java.util.Scanner;

class Factorial{
	Factorial(){
	}
	
	private int n;
	
	public void SetN(int n) {
		this.n=n;
	}
	public int getN() {
		return n;
	}
	
	public int fac(int n) {
		if(n==1) {
			return 1;
		}
		else {
			return n*fac(n-1);
		}
	}
	
}
public class test13{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		Factorial factorial=new Factorial();
		factorial.SetN(sc.nextInt());
		System.out.println(factorial.fac(factorial.getN()));
		
	}
}