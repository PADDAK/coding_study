
abstract class Unit{
	public Unit(){
	}
	
	protected String name;
	protected int move;
	
	Unit(String name,int move){
		this.name=name;
		this.move=move;
	}
	
	protected abstract void Name();
	protected abstract void Move();
}

class Marine extends Unit{
	public Marine() {
	}
	
	public Marine(String name,int move) {
		super(name,move);
	}
	
	@Override
	public void Name() {
		System.out.printf("나는 %s\n",name);
	}
	@Override
	public void Move() {
		System.out.printf("%d만큼 이동할게\n",move);
	}
}

class Tank extends Unit{
	public Tank() {
	}
	public Tank(String name,int move) {
		super(name,move);
	}
	
	@Override
	public void Name() {
		System.out.printf("나는 %s\n",name);
	}
	@Override
	public void Move() {
		System.out.printf("%d만큼 이동할게\n",move);
	}
}
public class test20 {

	public static void main(String[] args) {
		Marine marine=new Marine("마린",5);
		Tank tank=new Tank("탱크",9);
		
		marine.Name();
		marine.Move();
		
		tank.Name();
		tank.Move();
	}

}
