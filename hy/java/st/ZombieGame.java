	import java.util.*;

public class ZombieGame {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Random r = new Random();
		int map[] = new int[21];
		
		int em1 = 7; //첫번째 좀비의 배열(방번호) 위치
		int em2 = 15; //두번째 좀비의 배열 위치
		int ch = 0; //주인공 배열 위치 인덱스값
		int input = 0;
		map[ch] = 1; //위치 표시
		map[em1] = 2;
		map [em2] = 2;
		
		
		while (true/*true 쓰면 무한루프 쓰고 20일때 break로 끝내면 됨*/) 
		{
			for(int value : map) 
			{
				System.out.print(value);
			}
			System.out.println();
			System.out.println("왼쪽(1) 오른쪽(2) 오른쪽 랜덤점프 1~3(3)");
			input = s.nextInt();
			if(input == 1) 
			{
				ch = ch-1;
				if(ch<0) 
				{
					ch=0; //맵 밖으로 나가지 않도록 함
				}
			}
			else if(input==2) 
			{
				map[ch]=0;
				ch = ch+1;
				map[ch] = 1;
			}
			else if(input==3) 
			{
				map[ch] = 0;
				ch = ch + r.nextInt(3)+1;// 1~3 사이의 숫자값이 더해짐
				map[ch] = 1;
			}
			System.out.println("현재 히어로의 좌표는 "+ch+"입니다.");
			
			map[em1] = 0;
			em1 = em1 + r.nextInt(3)-1; //0 1 2 를 -1 0 1로 바꿈
			map [em1] = 2;
			System.out.println("현재 좀비 1의 위치는 "+em1+"입니다.");
			map[em2] = 0;
			em2 = em2 + r.nextInt(3)-1;
			map[em2] = 2;
			System.out.println("현재 좀비 2의 위치는 "+em2+"입니다.");
			
			if (ch>=20) 
			{
				System.out.println("미션클리어!!! 목적지에 도착했습니다.");
			}
			if (ch == em1 || ch==em2) 
			{
				System.out.println("히어로가 죽었습니다.");
				map[ch] = 0; 
				ch = 0;
				map[ch] = 1;
				continue;
			}
		}
	}
}