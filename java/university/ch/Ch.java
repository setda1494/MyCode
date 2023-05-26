package rurxn;


//Ʋ
import java.util.*;
public class Ch {
	Random r = new Random();
	String name; // �̸�
	private int hp;		//ü��
	
	
	public int getHp() {
		return hp;
	}
	
	public void setHp(int hp) {
		this.hp = hp;
	}
	public int attack(int max) {
		int power = r.nextInt(max)+1;
		return power;
	}
	public Ch(String n, int h) {
		name = n ;
		hp = h;
	}
	
}