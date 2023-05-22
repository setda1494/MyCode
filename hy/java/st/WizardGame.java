import java.util.*;
public class WizardGame {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        int enemyHp = 100;

        while (enemyHp > 0) 
        {
            System.out.print("불 공격 또는 얼음 공격 선택 (b 또는 i) >> ");
            String input = scanner.next();

            int damage = 0;
            if (input.equals("b")) 
            {
                damage = random.nextInt(11) + 10;
                System.out.println("마법사가 불 공격을 시전했습니다.");
            } else if (input.equals("i")) {
                damage = random.nextInt(16) + 15;
                System.out.println("마법사가 얼음 공격을 시전했습니다.");
            } 
            else 
            {
                System.out.println("잘못된 입력입니다.");
                continue;
            }

            enemyHp -= damage;

            if (enemyHp > 0) 
            {
                System.out.println("적의 체력: " + enemyHp);
            } 
            else 
            {
                System.out.println("적을 물리쳤습니다.");
            }

	}

}
}
