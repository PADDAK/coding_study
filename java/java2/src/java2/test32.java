
class ThreadEx1 extends Thread{
	public void run() {
		for(int i=0;i<30;i++) {
			System.out.println("-");
		}
	}
}

class ThreadEx2 extends Thread{
	public void run() {
		for(int i=0;i<30;i++) {
			System.out.println("|");
		}
	}
	
}

public class test32 {

	public static void main(String[] args) {
		ThreadEx1 t1=new ThreadEx1();
		ThreadEx2 t2=new ThreadEx2();
		
		t1.setPriority(4);
		t1.setPriority(9);
		
		System.out.println(t1.getPriority());
		System.out.println(t2.getPriority());
		
		t1.start();
		t2.start();
	} 

}   

