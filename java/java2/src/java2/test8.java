class A{
	private String name;
	private int age;
	
	public A() {
	}
	
	public A(String name,int age) {
		this.name=name;
		this.age=age;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name=name;
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAge() {
		this.age=age;
	}
}

public class test8{
	public static void main(String[] args) {
		A[] a=new A[5];
		
		a[0]=new A("권지용",44);
		a[1]=new A("아이유",55);
		a[2]=new A("이찬혁",66);
		a[3]=new A("최승현",77);
		a[4]=new A("한승연",88);
		
		
		for(int i=0;i<a.length;i++) {
			System.out.println(a[i]);
		}
	}
}