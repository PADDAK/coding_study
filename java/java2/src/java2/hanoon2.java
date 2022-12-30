class Jy {
	public final static int FIXED_RATE = 700;
	
	//필
	private int a;
	private int b;
	private String s;
	
	//생성
	public Jy() {
		
	}
	
	public Jy(int someNum) {
		this.a = this.b = someNum;
	}
	
	public Jy(int a, int b, String s) {
		this.a = a;
		this.b = b;
		this.s = s;
	}
	
	//getter
	public int getA() {
		return this.a;
	}
	
	public int getB() {
		return this.b;
	}
	
	public String getS() {
		return this.s;
	}
	
	//setter
	public void setA(int a) {
		this.a = a;
	}
	
	public void setB(int b) {
		this.b = b;
	}

	public void setS(String s) {
		this.s = s;
	}

	//메소em
	public String method1() {
		System.out.print(this.FIXED_RATE);
		return "";
	}
	
	public int sumAAndB() {
		return this.FIXED_RATE * (this.a + this.b);
	}
	
	public static String sample() {
		//System.out.print(this.a); -> static 메서드에서는 static 변수만 사용 가
		return "this is static method";
	}
}

public class hanoon2 {
	public static void main(String[] args) {
		int a = Jy.FIXED_RATE;
		String bbb = Jy.sample();
		
		Jy jy;
		jy = new Jy();
		jy.setA(0);
		jy.setB(1);
		jy.setS("ababsf");
		
	
		int k = sumAAndB(jy);
		
		Jy jy2 = new Jy(0, 1, "");
				
		
	
		System.out.print("JY");
	}
	
	public static int sumAAndB(Jy jy) {
		return jy.FIXED_RATE * (jy.getA() + jy.getB());
	}
}

