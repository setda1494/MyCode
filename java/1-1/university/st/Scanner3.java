import java.util.*;
public class Scanner3 {

	public static void main(String[] args) {
		 Scanner scanner = new Scanner(System.in);

	        System.out.print("2자리수 정수 입력(10-99) >> ");
	        int num = scanner.nextInt();//수 입력

	        int tens = num / 10;//10 의 자리 나누어 저장
	        int ones = num % 10;// 1 의 자리 나누어 저장

	        // 10 의 자리와 1의 자리가 같은지 비교
	        if (tens == ones) //맞을경우
	        {
	            System.out.println("Yes! 10의 자리와 1의 자리가 같습니다.");// 
	        } 
	        else //틀릴경우
	        {
	            System.out.println("No! 10의 자리와 1의 자리가 다릅니다.");
	        }
	}

}
