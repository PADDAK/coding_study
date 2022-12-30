import java.util.*;

class Product{
}
class Tv extends Product{
}
class Audio extends Product{
}
public class Program{
	public static void main(String[] args) {
		ArrayList<Product> productList=new ArrayList<Product>();
		ArrayList<Tv> tvList=new ArrayList<Tv>();
//		List<Tv> tvList1=new ArrayList<Tv>();
	
		productList.add(new Tv());
		productList.add(new Audio());
	}
}

