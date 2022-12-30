import static java.util.Collections.*;
import java.util.*;

public class test31 {
	public static void main(String[] args) {
		List list=new ArrayList();
		System.out.println(list);
		
		addAll(list,1,2,3,4,5);
		System.out.println(list);
		
//		rotate(list,2);
//		System.out.println(list);
//		
//		swap(list,0,2);
//		System.out.println(list);
//		
//		shuffle(list);
//		System.out.println(list);
//		
//		sort(list, reverseOrder());
//		System.out.println(list);
		
//		reverse(list);
//		System.out.println(list);
//		
//		sort(list);
//		System.out.println(list);
//		
//		System.out.println(binarySearch(list,3));
		
//		System.out.println(max(list));
//		System.out.println(min(list));
//		
		replaceAll(list,2,1);
		System.out.println(list);
	}
}
