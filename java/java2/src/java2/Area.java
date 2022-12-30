import java.util.Scanner;

interface Areainterface{
	public final static double PI=3.14;
	
	public abstract void Extend();
}

class Circle implements Areainterface{
	private int r;
	public Circle(){
	}
	public void setR(int r) {
		this.r=r;
	}
	public double getR() {
		return PI*r*r;
	}
	public void Extend() {
		System.out.printf("원넓이 = %.1f",getR());
	}
}

class Rectangle implements Areainterface{
	private int x,y;
	
	public Rectangle() {
	}
	public int getX() {
		return x;
	}
	public void setX(int x) {
		this.x = x;
	}
	public int getY() {
		return y;
	}
	public void setY(int y) {
		this.y = y;
	}
	public void Extend() {
		System.out.printf("사각형넓이 = %d",getX()*getY());
	}
}

class TrapeZoid implements Areainterface{
	private int x,y,z;
	
	public TrapeZoid() {
	}
	public int getX() {
		return x;
	}
	public void setX(int x) {
		this.x = x;
	}
	public int getY() {
		return y;
	}
	public void setY(int y) {
		this.y = y;
	}
	public int getZ() {
		return z;
	}
	public void setZ(int z) {
		this.z = z;
	}
	public void Extend() {
		System.out.printf("사다리꼴넓이 = %.1f",(double)(((getX()+getY())*getZ())/2));
	}
}
public class Area {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Circle circle=new Circle();
		Rectangle rectangle=new Rectangle();
		TrapeZoid trapezoid=new TrapeZoid();
		
		System.out.print("머구할래?:(1.원 2.사각형 3.사다리꼴)");
		int a=sc.nextInt();
		
		if(a==1) {
			System.out.print("반지름?:");
			circle.setR(sc.nextInt());
			circle.Extend();
		}
		else if(a==2) {
			System.out.print("밑면?:");
			rectangle.setX(sc.nextInt());
			System.out.print("높이?:");
			rectangle.setY(sc.nextInt());
			rectangle.Extend();
		}
		else {
			System.out.print("밑면?:");
			trapezoid.setX(sc.nextInt());
			System.out.print("윗면?:");
			trapezoid.setY(sc.nextInt());
			System.out.print("높이?:");
			trapezoid.setZ(sc.nextInt());
			trapezoid.Extend();
		}
	}
}
