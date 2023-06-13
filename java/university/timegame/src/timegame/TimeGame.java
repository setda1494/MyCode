package timegame;

import java.util.Calendar;
import java.util.Scanner;

public class TimeGame {
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("10초에 가까운 사람이 이기는 게임입니다.");

        System.out.println("황기태 시작 <Enter>키 >>");
        scanner.nextLine();
        int startTime1 = getCurrentSeconds();
        System.out.println("현재 초 시간 = " + startTime1);

        System.out.println("\n10초 예상 후 <Enter>키 >>");
        scanner.nextLine();
        int endTime1 = getCurrentSeconds();
        System.out.println("현재 초 시간 = " + endTime1);

        System.out.println("\n이재문 시작 <Enter>키 >>");
        scanner.nextLine();
        int startTime2 = getCurrentSeconds();
        System.out.println("현재 초 시간 = " + startTime2);

        System.out.println("\n10초 예상 후 <Enter>키 >>");
        scanner.nextLine();
        int endTime2 = getCurrentSeconds();
        System.out.println("현재 초 시간 = " + endTime2);

        int result1 = Math.abs(endTime1 - startTime1 - 10);
        int result2 = Math.abs(endTime2 - startTime2 - 10);

        System.out.println("\n황기태의 결과 " + result1 + ", 이재문의 결과 " + result2 +
                ", 승자는 " + (result1 < result2 ? "황기태" : "이재문"));
    }

    private static int getCurrentSeconds() {
        Calendar calendar = Calendar.getInstance();
        return calendar.get(Calendar.SECOND);
    }
}
