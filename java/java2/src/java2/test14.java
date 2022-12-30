
class Calculator{
//	public Calculator(){
//	}
//	
	protected int x,y;
	
	public Calculator(int x, int y) {
		this.x=x;
		this.y=y;
	}
	
	public void set(int x, int y) {
		this.x=x;
		this.y=y;
	}
	public void sum() {
		System.out.println(x+y);
	}
}

class Subtract extends Calculator{
	
	public Subtract(int x, int y) {
		super(x,y);
	}
//	public Subtract(){
//		
//	}
	public void sub() {
		System.out.println(x-y);
	}
}

class Multiply extends Subtract{
	public Multiply(int x, int y) {
		super(x,y);
	}
	public void mul() {
		System.out.println(x*y);
	}
}

public class test14{
	public static void main(String[] agrs) {
//		Calculator c1=new Calculator();
//		Subtract c2=new Subtract();
		Multiply c3=new Multiply();
		c3.set(3,4);
		c3.sum();
		c3.sub();
		c3.mul();
	}
}