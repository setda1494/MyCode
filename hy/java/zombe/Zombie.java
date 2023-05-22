import java.util.*;
public class Zombie {
	Random r;
	String name;
	int pos;
	
	public Zombie(String name, int pos) {
		this.name = name;
		this.pos = pos;
		r = new Random();
	}
	
	public void move() {
		int a = r.nextInt(3)-1;
		pos = pos + a;
		System.out.println(name + "의 위치가 변화하였습니다 현제 "+name+"의 위치:" +pos);
	}
}
