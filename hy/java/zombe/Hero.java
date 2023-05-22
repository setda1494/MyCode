import java.util.*;

public class Hero {
	Random r;
	String name;
	int pos;
	int life; //플래ㅣ엉새염ㅇ
	
	public Hero(String name, int pos, int life) {
		this.name = name;
		this.pos = pos;
		this.life = life;
		r = new Random();	
	}
	public void leftMove() {
		if(pos > 0) 
			pos = pos - 1;
			System.out.println(name+"가 왼쪽으로 이동하였습니다  현제 플래이어의 위치 :"+pos);
		}
	
	public void rightMove() { 
			pos = pos + 1;
			System.out.println(name+"가 오른쪽으로 이동하였습니다  현제 플래이어의 위치 :"+pos);
		}
	public void jump() {
		int a = r.nextInt(3)+1;
		pos = pos + a;
		System.out.println(name+"가"+a+"만큼 점프 하였습니다 현제 플래이어의 위치 :"+pos);
	}
}
