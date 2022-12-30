import java.util.Scanner;

public class test7 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int sum=0;
		
		System.out.print("정수입력:");
		int n=sc.nextInt();
		
		for(int i=0;i<=n;i++) {
			sum+=i;
		}
		System.out.print("n까지의합:");
		System.out.println(sum);
	}
}
