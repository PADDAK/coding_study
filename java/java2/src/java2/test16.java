
abstract class Calculator1{
	int x,y;
	public void setOprand(int x,int y) {
		this.x=x;
		this.y=y;
	}
	
	public abstract int sum();
	public abstract int avg();
	
	public void run() {
		sum();
		avg();
	}
}

class Calculator2 extends Calculator1{
	@Override
	public int sum() {
		return x+y;
	}
	@Override
	public int avg() {
		return x+y;
	}
}
public class test16 {

	public static void main(String[] args) {
		Calculator2 c1=new Calculator2();
		c1.x=3;
		c1.y=4;
		System.out.println(c1.sum());
	}

}
