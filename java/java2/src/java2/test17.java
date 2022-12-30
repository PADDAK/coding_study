import java.util.Scanner;

class Student{
	public Student() {
	}
	private String name;
	private int korean;
	private int english;
	private int math;
	private double average;
	
	public Student(String name,int english,int math,double average, int korean) {
		this.setName(name);
		this.korean=korean;
		this.english=english;
		this.math=math;
		this.average=(korean+english+math)/3;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getKorean() {
		return korean;
	}
	public void setKorean(int korean) {
		this.korean = korean;
	}
	public int getEnglish() {
		return english;
	}
	public void setEnglish(int english) {
		this.english = english;
	}
	public int getMath() {
		return math;
	}
	public void setMath(int math) {
		this.math = math;
	}
	public double getAverage() {
		return average;
	}
	public void setAverage(double average) {
		this.average = (korean+english+math)/3;
	}
	
}

public class test17{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.print("학생수:");
		int n=sc.nextInt();
		Student[] stu=new Student[n];
		for(int i=0;i<stu.length;i++) {
			stu[i]=new Student();
		}
		
		for(int i=0;i<stu.length;i++) {
			System.out.print("이름:");
			stu[i].setName(sc.next());
			System.out.print("국어성적:");
			stu[i].setKorean(sc.nextInt());
			System.out.print("영어성적:");
			stu[i].setEnglish(sc.nextInt());
			System.out.print("수학성적:");
			stu[i].setMath(sc.nextInt());
			
		}
		
		for(int i=0;i<stu.length;i++) {
			System.out.print("이름:"+stu[i].getName()+"\t");
			System.out.print("국어성적:"+stu[i].getKorean()+"\t");
			System.out.print("영어성적:"+stu[i].getEnglish()+"\t");
			System.out.print("수학성적:"+stu[i].getMath()+"\t");
			System.out.print("평균:"+stu[i].getAverage());
			System.out.println();
		}
	}
}