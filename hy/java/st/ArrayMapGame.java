import java.util.*;

public class ArrayMapGame {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int map[][] = { { 0, 0, 1, 1, 1 }, 
						{ 1, 0, 1, 1, 1 },
						{ 1, 0, 0, 0, 1 }, 
						{ 1, 1, 1, 0, 0 }, 
						{ 1, 1, 1, 1, 0 } };
		int x = 0, y = 0;
		int input = 0;
		int count = 0;
		Scanner s = new Scanner(System.in);

		while (true) {
			map[y][x] = 2;
			for(int i=0; i<5; i++) {
				for(int j=0; j<5; j++) {
					System.out.print(map[i][j] + " ");
				}
				System.out.println();
			}
			map[y][x] = 0;
			System.out.println("캐릭터의 현재 위치는 (" + x + "," + y + ")" + "현재입력횟수:"+count);
			System.out.println("캐릭터를 이동해주세요. 상(1), 하(2), 좌(3), 우(4)");
			input = s.nextInt();
			if (input == 1) {
				if (y > 0) y = y - 1;
				else System.out.println("맵 밖으로 나갈수 없습니다.");

				if (map[y][x] == 1) {
					System.out.println("벽이 있습니다. 이동할 수 없습니다.");
					y = y + 1;
				}
			} else if (input == 2) {
				if (y < 4) y = y + 1;
				else System.out.println("맵 밖으로 나갈수 없습니다.");

				if (map[y][x] == 1) {
					System.out.println("벽이 있습니다. 이동할 수 없습니다.");
					y = y - 1;
				}
			} else if (input == 3) {
				if (x > 0) x = x - 1;
				else System.out.println("맵 밖으로 나갈수 없습니다.");

				if (map[y][x] == 1) {
					System.out.println("벽이 있습니다. 이동할 수 없습니다.");
					x = x + 1;
				}
			} else if (input == 4) {
				if (x < 4) x = x + 1;
				else System.out.println("맵 밖으로 나갈수 없습니다.");

				if (map[y][x] == 1) {
					System.out.println("벽이 있습니다. 이동할 수 없습니다.");
					x = x - 1;
				}
			} else
				System.out.println("잘못입력했습니다. 다시 입력해주세요.");


			
			if ((x == 4) && (y == 4)) {
				System.out.println("목적지에 도착했습니다.게임을 종료합니다.");
				System.out.println("총 " + count + " 번 만에 목적지에 도착했습니다.");
				break;
			}
			count++;
		}
	}
}
