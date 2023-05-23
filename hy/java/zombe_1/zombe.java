package zombe2;

public class zombe extends Unit{
	
	public zombe (String name, int pos) 
	{
		super(name, pos);
	}
	
	public void move() {
		int p = r.nextInt(3);
		if (p == 0) {
			left();
		}
		else if (p==1) {
			right();
		}
		System.out.println(name + "의 현제 위치는"+ pos +"입니다");
	}
	
}
