import java.util.ArrayList;

abstract class Car{
	public abstract void start();
	public abstract void drive();
	public abstract void stop();
	public abstract void turnoff();
	
	final public void run() {
		start();
		drive();
		stop();
		turnoff();
		System.out.println("=================");
	}
}

class Sonata extends Car{
	@Override
	public void start() {
		System.out.println("소나타시동");
	}
	@Override
	public void drive() {
		System.out.println("소나타달린다");
	}
	@Override
	public void stop() {
		System.out.println("소나타멈춘다");
	}
	@Override
	public void turnoff() {
		System.out.println("소나타시동끈다");
	}
}

class Avante extends Car{
	@Override
	public void start() {
		System.out.println("아반떼시동");
	}
	@Override
	public void drive() {
		System.out.println("아반떼달린다");
	}
	@Override
	public void stop() {
		System.out.println("아반떼멈춘다");
	}
	@Override
	public void turnoff() {
		System.out.println("아반떼시동끈다");
	}
}

class Gradeur extends Car{
	@Override
	public void start() {
		System.out.println("그랜져시동");
	}
	@Override
	public void drive() {
		System.out.println("그랜져달린다");
	}
	@Override
	public void stop() {
		System.out.println("그랜져멈춘다");
	}
	@Override
	public void turnoff() {
		System.out.println("그랜져시동끈다");
	}
}

class Genesis extends Car{
	@Override
	public void start() {
		System.out.println("제네시스시동");
	}
	@Override
	public void drive() {
		System.out.println("제네시스달린다");
	}
	@Override
	public void stop() {
		System.out.println("제네시스멈춘다");
	}
	@Override
	public void turnoff() {
		System.out.println("제네시스시동끈다");
	}
}

public class CarTest{
	public static void main(String[] args) {
		
		ArrayList<Car> carList=new ArrayList<Car>();
		
		carList.add(new Sonata());
		carList.add(new Gradeur());
		carList.add(new Avante());
		carList.add(new Genesis());
		
		for(Car car : carList) {
			car.run();
		}
		
	}
}