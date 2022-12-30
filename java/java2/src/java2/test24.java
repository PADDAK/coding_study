import java.util.Scanner;

class Buyer{
	private int money;
	private int bonusPoint;
	public Buyer() {
	}
	public int getMoney() {
		return money;
	}
	public void setMoney(int money) {
		this.money = money;
	}
	
	public int getBonusPoint() {
		return bonusPoint;
	}
	public void setBonusPoint(int bonusPoint) {
		this.bonusPoint = bonusPoint;
	}
	public void show() {
		System.out.print("얼마있니?:");
	}
	
}
public class test24{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Buyer buyer=new Buyer();
		System.out.println("============물건사기============");
		buyer.show();
		buyer.setMoney(sc.nextInt());
		
	
		
		
	}
}