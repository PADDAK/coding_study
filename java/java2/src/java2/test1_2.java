import java.util.Scanner;
class UU{
	private int num;
	
	public void set(int num) {
		this.num=num;
	}
	public int get() {
		return num;
	
	}
}
public class test1_2 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		UU u= new UU();
		
		u.set(sc.nextInt());
		
		System.out.println(u.get());
	}
}

