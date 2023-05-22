import java.util.Scanner;

public class ZombieGame {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Hero hero = new Hero("히어로", 0, 3);
		
		//Zombie zom1 = new Zombie("좀비1", 7);
		//Zombie zom2 = new Zombie("좀비2", 15);
		Zombie zom[]= new Zombie[2];
		
		for(int i=0; i<zom.length; i++)
		{
			zom[1] = new Zombie("좀비", i+2);
		}
		
		Scanner s = new Scanner(System.in);
		
		//플래이어 입력
		while (true) 
		{System.out.println("왼쪽 1,오른쪽 2, 점프 3,을 선택하세요");
		int input = s.nextInt();
		
		//캐릭터 이동
		if (input ==1) hero.leftMove();
		else if (input ==2) hero.rightMove();
		else if (input ==3) hero.jump();
		
		//좀비 이동
		for(int i=0; i<zom.length; i++)
		{
			zom[1].move();
		}
		
		for(int i=0; i<zom.length; i++) 
		{
			if ((hero.pos == zom[i].pos) )
			{
				hero.life = hero.life-1;
				System.out.println("좀비에계 물렸습니다");
				if (hero.life == 0) 
				{
					System.out.println("생명이 0 입니다 게임을 종료합니다");
					break;
				}
				else 
				{
					System.out.println("생명이 감소하였습니다 현제 플리어의 생명 :"+hero.life);
					hero.pos = 0;
				}
				}
		}
		if (hero.life==0)
		{
			break;
		}
		if (hero.pos >= 20) {

			System.out.println("게임 클리어 목적지에 도착하였습니다");
			break;
		}	
		}
	}

}
