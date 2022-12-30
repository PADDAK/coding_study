
interface OpenCloseIf{
	public abstract void open();
	public abstract void close();
}

interface PaintIf{
	public abstract void Red();
	public abstract void Blue();
}

class Door implements OpenCloseIf,PaintIf{
	@Override
	public void open() {
		System.out.println("Door open");
	}
	@Override
	public void close() {
		System.out.println("Door close");
	}
	@Override
	public void Red() {
		System.out.println("Paint the door red");
	}
	@Override
	public void Blue() {
		System.out.println("Paint the door blue");
	}
	
}

class Bottle implements OpenCloseIf{
	@Override
	public void open() {
		System.out.println("Bottle open");
	}
	@Override
	public void close() {
		System.out.println("Bottle close");
	}
}
public class test21 {
	public static void main(String[] args) {
		Door door=new Door();
		door.open();
		door.close();
		door.Red();
		door.Blue();
		
		Bottle bottle=new Bottle();
		bottle.open();
		bottle.close();
	}
}
