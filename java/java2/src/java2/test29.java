
import java.util.*;

class Student2{
	String name;
	int group;
	int num;
	
	public Student2(String name, int group, int num) {
		this.name=name;
		this.group=group;
		this.num=num;
	}
}

public class test29 {

	public static void main(String[] args) {
		ArrayList<Student2> stu=new ArrayList<>();
		stu.add(new Student2("아이유",1,3));
		stu.add(new Student2("권지용",3,4));
		stu.add(new Student2("이찬혁",6,1));
		
		Iterator<Student2> it=stu.iterator();
//		Iterator it=stu.iterator();
		
		while(it.hasNext()) {
//			Student2 s=(Student2)it.next();
			System.out.printf("이름:%s 반:%d 번호:%d\n",it.next().name,it.next().group,it.next().num);
//			System.out.println(it.next().name);
		}
		

	}

}
