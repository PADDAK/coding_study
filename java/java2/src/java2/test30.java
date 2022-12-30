
import java.util.*;

public class test30 {

	public static void main(String[] args) {
		HashMap map=new HashMap();
		map.put("1번",1);
		map.put("2번",2);
		System.out.println(map);
		map.put("2번",2);
		System.out.println(map);
		
//		Scanner sc=new Scanner(System.in);   
//		
//		while(true) {
//			System.out.println("id와 password 입력");
//			System.out.print("id:");
//			String id=sc.nextLine().trim();
//			
//			System.out.print("psw:");
//			String password=sc.nextLine().trim();
//			
//			if(!map.containsKey(id)) {
//				System.out.println("idㄴㄴ 다시");
//				continue;
//			}
//			
//			if(!(map.get(id).equals(password))) {
//				System.out.println("비번 ㄴ일치 다시");
//			}
//			else {
//				System.out.println("id와 비번 일치");
//				break;
//			}
//		}
		
	}

}
