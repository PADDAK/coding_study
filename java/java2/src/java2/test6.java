//섞기

import java.util.Arrays;
import java.util.Random;

public class test6 {
	public static void main(String[] args) {
		int[] arr1 = new int[10];
		Random rd=new Random();

		for (int i = 0; i < arr1.length; i++) {
			arr1[i]=i;
		}
		
		System.out.println(Arrays.toString(arr1));
		
		for(int i=0;i<arr1.length;i++) {
			int n=rd.nextInt(10);
			int temp;
			temp=arr1[0];
			arr1[0]=arr1[n];
			arr1[n]=temp;
		}
		
		System.out.println(Arrays.toString(arr1));
	}
	
}
