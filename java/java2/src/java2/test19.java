
abstract class Animal{
	String animalName;
	
	Animal(String name){
		animalName=name;
	}
	
	public abstract void cry();
	public abstract void behavior();
}

class Tiger extends Animal{
	public Tiger(String name) {
		super(name);
	}
	
	@Override
	public void cry(){
		System.out.println("어흥");
	}
	
	@Override
	public void behavior() {
		System.out.println("오른쪽움직");
	}
}

class Dog extends Animal{
	public Dog(String name) {
		super(name);
	}
	
	@Override
	public void cry() {
		System.out.println("멍");
	}
	
	@Override
	public void behavior() {
		System.out.println("왼쪽움직");
	}
}

public class test19{
	public static void main(String[] args) {
		Tiger tiger = new Tiger("아아아");
		Dog dog = new Dog("웅우우");
		
		System.out.printf("호랑이 이름은%s임\n",tiger.animalName);
		tiger.cry();
		tiger.behavior();
		
		System.out.printf("강아지 이름은%s임\n",dog.animalName);
		dog.cry();
		dog.behavior();
	}
}