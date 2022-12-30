//난수발생시켜 최대최소 뽑아내기
import java.util.Random;

public class test5 {
	public static void main(String[] args) {
		int[] score=new int[5];						//score[5]짜리 배열생성
		Random rd=new Random();						//난수생성기
		int max=score[0];						
		int min=score[0];
		
		for(int i=0;i<score.length;i++) {			//50까지 난수 배열에저장
			score[i]=rd.nextInt(50);
		}
		
		for(int i=1;i<score.length;i++) {			
			if(score[i]>max) {						//max에 score[0]값 저장되있으니 그 다음요소들과 비교해서 크면 max에 저장
				max=score[i];
			}
			else if(score[i]<min) {					//min에 score[0]값 저장되있으니 그 다음요소들과 비교해서 작으면 min에저장
				min=score[i];
			}
		}
		System.out.printf("%d %d",max,min);
	}
}
