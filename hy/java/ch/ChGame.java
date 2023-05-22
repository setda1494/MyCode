package rurxn;

public class ChGame {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Ch ryu = new Ch("류ㅜ", 100);
		Ch ken = new Ch("캔", 200);
		
		while(true) {
		int rpower = ryu.attack(20);
		ken.setHp(ken.getHp() - rpower);
		System.out.println("Ken 의 현제 hp: "+ ken.getHp());
		
		int kpower = ken.attack(10);
		ryu.setHp(ryu.getHp() - kpower);
		System.out.println("Ryu 의 현제 hp: "+ ryu.getHp());
		
		
		if((ken.getHp()<=0)&&(ryu.getHp()<=0)) {
			System.out.println("무승부.");
			break;
		}
		if(ken.getHp() <=0) {
			System.out.println("Ryu의 승리.");
			break;
		}
		else if(ryu.getHp() <=0) {
			System.out.println("Ken의 승리.");
			break;
		}
		
		}
	}

}
