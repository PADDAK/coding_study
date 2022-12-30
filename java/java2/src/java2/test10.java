class C{
	String color;
	String geartype;
	int door;
	
	C(){
		this("ㅋ","ㅇ",4);
	}
	
	C(String color){
		this(color,"d",4);
	}
	C(String color,String geartype,int door){
		this.color=color;
		this.geartype=geartype;
		this.door=door;
	}
	
	
}
public class test10 {
	public static void main(String[] args) {
		C a=new C("노랑","빨강",4);
		C b=new C("핰");
		System.out.println(a.color+a.geartype+a.door);
		System.out.println(b.color+b.geartype+b.door);
	}
}
