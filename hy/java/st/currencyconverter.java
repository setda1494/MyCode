import java.util.*;
public class currencyconverter {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

        System.out.print("원화를 입력하세요(단위 원): ");
        int won = scanner.nextInt();

        double dollar = won / 1100.0;

        System.out.println(won + "원은 $" + String.format("%.1f", dollar) + " 입니다.");
	}

}
	