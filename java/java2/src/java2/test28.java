
import java.util.*;

public class test28 {

	public static void main(String[] args) {
		ArrayList<Integer> list=new ArrayList<>();
		ArrayList<String> list2=new ArrayList<>();
		
		list.add(1);
		list.add(2);
		list.add(3);
		
		list2.add("a");
		list2.add("b");
		list2.add("c");
		
		Iterator it=list.iterator();
		Iterator it2=list2.iterator();
		
		while(it.hasNext()) {
			System.out.println(it.next());
		}
		
		while(it2.hasNext()) {
			System.out.println(it2.next());
		}
		
	}

}
