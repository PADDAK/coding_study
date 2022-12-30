import java.util.Scanner;

class Grade{
	public Grade() {
	}
	
	private int korean;
	private int english;
	private int math;
	private double average;
	
	public void setK(int korean) {
		this.korean=korean;
	}
	public int getK() {
		return korean;
	}
	
	public void setE(int english) {
		this.english=english;
	}
	public int getE() {
		return english;
	}
	
	public void setM(int math) {
		this.math=math;
	}
	public int getM() {
		return math;
	}
	
	public double Average() {
		return setAverage((korean+english+math)/3);
		
	}
	public double getAverage() {
		return average;
	}
	public double setAverage(double average) {
		this.average = average;
		return average;
	}
	
}

public class test12{
	public static void main(String[] args) {
		Grade grade=new Grade();
		Scanner sc=new Scanner(System.in);
		
		grade.setK(sc.nextInt());
		grade.setE(sc.nextInt());
		grade.setM(sc.nextInt());
		
		System.out.printf("국어점수:%d\n영어점수:%d\n수학점수:%d\n평균:%.1f\n",grade.getK(),grade.getE(),grade.getM(),grade.Average());
	}
}
