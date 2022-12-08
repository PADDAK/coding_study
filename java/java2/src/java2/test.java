package java2;

import java.util.Scanner;

public class test{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("나이,체중,신장을 빈칸으로 분리하여 기입");
//		int age=sc.nextInt();
//		double height=sc.nextDouble();
//		Double weight=sc.nextDouble();
//		System.out.println("당신의나이는 "+age+"입니다");
//		System.out.println("당신의체중은"+weight+"입니다");
//		System.out.println("당신의신장은"+height+"입니다");
		
		System.out.println("당신의나이는"+sc.nextInt()+"입니다");
		System.out.println("당신의체중은"+sc.nextDouble()+"입니다");
		System.out.println("당신의신장은"+sc.nextDouble()+"입니다");
		
		
//		System.out.printf("당신의나이는 %d 입니다\n",age);
//		System.out.printf("당신체중은 %.2f 입니다\n",weight);
//		System.out.printf("당신의신장은 %.2f 입니다\n",height);
		
	}
}