import java.util.*;

public class test25{
	public static void main(String[] args) {
		int arr[]= {0,1,2,3,4};
		int[][] arr2D= {{11,12,13},{21,22,23}};
		
		int[] arr2=Arrays.copyOf(arr,arr.length);
		
		System.out.println(Arrays.toString(arr));
		System.out.println(Arrays.toString(arr2));
		
		int[] arr3=Arrays.copyOf(arr, 2);
		System.out.println(Arrays.toString(arr3));
		int[] arr4=Arrays.copyOfRange(arr,0,3);
		System.out.println(Arrays.toString(arr4));
		int[] arr5=Arrays.copyOfRange(arr,0,7);
		System.out.println(Arrays.toString(arr5));
		
		int[] arr6=new int[5];
		Arrays.fill(arr6,3);
		System.out.println(Arrays.toString(arr6));
		
		System.out.println(Arrays.equals(arr,arr4));
		
		String[][] D= {{"a","b","c"},{"A","B","C"}};
		String[][] D2= {{"a","b","c"},{"A","B","C"}};
		
		System.out.println(Arrays.deepToString(D2));
		System.out.println(Arrays.deepEquals(D,D2));
		
		char[] ch= {'A','H','E','P','L'};
		Arrays.sort(ch);
		System.out.println(Arrays.toString(ch));
		System.out.println(Arrays.binarySearch(ch, 'L'));
	}
}

