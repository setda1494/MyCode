import java.util.*;
public class Review03 {

	public static void main(String[] args) {
		  Scanner scanner = new Scanner(System.in);

	        System.out.print("이름을 입력하세요: ");
	        String name = scanner.nextLine();

	        System.out.print("나이를 입력하세요: ");
	        int age = scanner.nextInt();

	        System.out.print("생년월일을 8자리 숫자로 입력하세요: ");
	        int birthDate = scanner.nextInt();

	        System.out.print("키를 입력하세요: ");
	        double height = scanner.nextDouble();

	        System.out.println("회원 정보: ");
	        System.out.println("이름: " + name);
	        System.out.println("나이: " + age);
	        System.out.println("생년월일: " + birthDate);
	        System.out.println("키: " + height);
	        
	}

}
