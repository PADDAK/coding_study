interface Unit1{
	public static final String name = "dzlzl";
	public static final int move=4;
	
	public abstract void Name();
	public abstract void Move();
	
}

class Marine2 implements Unit1{
	@Override
	public void Name() {
		System.out.println("내이름머게");
	}
	@Override
	public void Move() {
		System.out.println("어디로이동하게");
	}
}

abstract class Tank2 implements Unit1{
	@Override
	public void Name() {
		System.out.println("오호호");
	}
}
public class test22 {

	public static void main(String[] args) {
		Marine2 marine=new Marine2();
		
		System.out.println(name);
		
		marine.Name();
		marine.Move();
	}

}
