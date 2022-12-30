
class Beer{
	protected String type;
	protected String model;
	
	public Beer(String type,String model) {
		this.type=type;
		this.model=model;
	}
	
	public void drink() {
		System.out.println("마신다");
	}
	public void mix() {
		System.out.println("섞는다");
	}
	public String getType() {
		return type;
	}
	public String getModel() {
		return model;
	}
}

class Hoegaarden extends Beer{
	String flavor;
	int ABV=6;
	
	public Hoegaarden(String model,String flavor) {
		super("밀맥주",model);
		this.model=model;
		this.flavor=flavor;
	}
	
	public Hoegaarden(String model,String flavor,int ABV) {
		super("밀맥주",model);
		this.model=model;
		this.flavor=flavor;
		this.ABV=ABV;
	}
	
	public void flavordrink() {
		System.out.println(model+"맥주의"+flavor+"맛마신다");
	}
	public String getFlavor() {
		return flavor;
	}
	public int getABV() {
		return ABV;
	}
}

public class HoegaardenBeerExample{
	public static void main(String[] args) {
		
		Hoegaarden holemon=new Hoegaarden("호가든","레몬",3);
		
		System.out.println("타입:"+holemon.getType());
		System.out.println("알콜도수:"+holemon.getABV());
		System.out.println("맛:"+holemon.getFlavor());
		holemon.flavordrink();
	}
}


