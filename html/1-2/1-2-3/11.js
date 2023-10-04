//power 함수
function power(num, exponent) {
    if (exponent === undefined) {
      // 매개변수를 하나만 받은 경우 제곱 연산
      return num * num;
    } else {
      // 두 개의 매개변수를 받은 경우 첫 번째 매개변수를 두 번째 매개변수만큼 제곱 연산
        return Math.pow(num, exponent);
    }
}

  // multiply 함수
function multiply(...nums) {
    if (nums.length === 0) {
      // 매개변수가 없는 경우 0을 반환하거나 오류 처리할 수 있습니다.
        return 0;
    } else {
      // 모든 매개변수 값을 곱한 결과 반환
      return nums.reduce((accumulator, currentValue) => accumulator * currentValue);
    }
}
  console.log(power(2));      // 출력: 4 (2^2)
  console.log(power(2, 3));   // 출력: 8 (2^3)

  console.log(multiply(1,2,3,4,5));   // 출력: 120 (1 * 2 * 3 * 4 *5)  åå