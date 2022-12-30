
class Num{
	protected int x,y,z,k;

	public Num() {
	}
	
	public Num(int x, int y, int z) {
		this.x=x;
		this.y=y;
		this.z=z;
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
	
}

class Calculator1 extends Num{
	public Calculator1() {
	}
	
	public int result(int x, int y) {
		return x+y;
	}
	public int result(int x, int y, int z) {
		return x+y+z;
	}
}

public class test15{
	public static void main(String[] args) {
		Calculator1 c1=new Calculator1();
		
		c1.setX(3);
		c1.setY(4);
		c1.setZ(9);
		
		System.out.println(c1.getX()+c1.getY());
		System.out.println(c1.getX()+c1.getY()+c1.getZ());
	}
}