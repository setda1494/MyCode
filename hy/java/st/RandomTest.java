import  java.util.*;	 	// Random 클래스를 포함하고 있는 패키지

public class RandomTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random r = new Random();  // Random 클래스 객체 생성
      	int number = r.nextInt(100);   // 0~99 사이의 수 발생시켜 number 변수에 저장

      	System.out.println("0~99 사이 난수 발생 :"  + number);	    // 출력
	}

}
