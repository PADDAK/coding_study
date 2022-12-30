
import java.util.Arrays;

public class test23{
	public static void main(String[] args) {
		String[] arr= {"a","b","c","d","e"};
		
		String[] newArr=Arrays.copyOf(arr,arr.length+2);
		String[] newArr2=Arrays.copyOf(arr, arr.length-2);
		newArr[arr.length]="f";
		newArr[arr.length+1]="g";
		
		System.out.println(arr);
		System.out.println(newArr);
		System.out.println(newArr2);
		
		System.out.println(Arrays.asList(arr));
		System.out.println(Arrays.asList(newArr));
		System.out.println(Arrays.asList(newArr2));
		System.out.println("======================");
		
		String[] ary= {"a","b","c","d","e"};
		String[] ary2=Arrays.copyOf(ary,ary.length+2);
		ary2[ary.length]="f";
		ary2[ary.length+1]="g";
		System.out.println(Arrays.asList(ary2));
		
		int[] a= {1,2,3,4,5};
		int[] a1=Arrays.copyOf(a,a.length+2);
		a1[a.length]=6; 
		a1[a.length+1]=7;
		
		System.out.println(Arrays.asList(a1));
	}
}