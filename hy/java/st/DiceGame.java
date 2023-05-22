import java.util.*;
public class DiceGame {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        // 1. 1~6까지의 숫자가 나오는 주사위 만들기
        int dice = rand.nextInt(6) + 1;
        System.out.println("홀짝 주사위 게임을 시작합니다.");

        // 2. 사용자로부터 홀/짝 입력 받기
        System.out.println("홀수(1) 또는 짝수(2)를 선택하세요.");
        int userChoice = sc.nextInt();

        // 3. 주사위를 던져서 게임 진행
        System.out.println("주사위를 던집니다.");
        System.out.println("나온 숫자는 " + dice + "입니다. " + (dice % 2 == 0 ? "짝수입니다." : "홀수입니다."));

        if ((dice % 2 == 0 && userChoice == 2) || (dice % 2 != 0 && userChoice == 1)) {
            System.out.println("축하합니다! 사용자가 이겼습니다.");
        } else {
            System.out.println("컴퓨터가 이겼습니다.");
        }
	}
}
