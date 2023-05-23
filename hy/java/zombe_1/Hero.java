package zombe2;
import java.util.*;
public class Hero extends Unit{
	
	int life;
	Scanner s = new Scanner(System.in);
	
	public Hero (String name, int pos, int life) 
	{
		super(name, pos);
		this.life = life;
	}
	public void jup()
	{
		int a = r.nextInt(3)+1;
		pos = pos + a;
		System.out.println(name+"이"+a+"만큼 점프 하였습니다.");
	}
	public void move() 
	{
		System.out.println("왼쪽(1), 오른쪽(2), 점프(3) 을 입력하세요");
		int a = s.nextInt();
		if (a==1) {
			left();
		}
		else if (a == 2) {
			right();
		}
		else if (a ==3) {
			jup();
		}
	}
}
