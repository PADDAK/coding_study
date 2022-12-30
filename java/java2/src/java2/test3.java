
import java.util.Random;

public class test3{
	public static void main(String[] args){
		Random rd=new Random();
		
		double arr[]=new double[5];
		
		for(int i=0;i<arr.length;i++) {
			arr[i]=rd.nextDouble(10);
		}
		
		for(int i=0;i<arr.length;i++) {
			System.out.println(arr[i]);
		}
	}
}