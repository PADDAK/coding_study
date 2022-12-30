
public class test4 {
	public static void main(String[] args) {
		int sum=0, count=0;
		double average=0;
		
		int score[]= {1,2,3,4,5};
		
		for(int i=0;i<score.length;i++) {
			sum+=score[i];
			count++;
		}
		
		for(int i=0;i<score.length;i++) {
			System.out.println(score[i]);
		}
		System.out.println(sum);
		System.out.println(count);
	}
}
