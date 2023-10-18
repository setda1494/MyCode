function checkGender(idNumber) 
{
    // 주민번호의 7번째 숫자를 추출하여 성별을 판단합니다.
    var genderDigit = idNumber.charAt(6);

    if (genderDigit === '1' || genderDigit === '3') {
        return '남자';
    } else if (genderDigit === '2' || genderDigit === '4') {
        return '여자';
    } else {
        return '성별을 확인할 수 없습니다.';
    }
}

function checkMilitaryOffice(idNumber) 
{
    // 주민번호의 앞 두 자리를 추출하여 출생 연도를 확인합니다.
    var birthYear = idNumber.substr(0, 2);

    // 출생 연도가 "04"이고 성별이 남자인 경우 병무청 안내 메시지를 반환합니다.
    if (birthYear === '04' && checkGender(idNumber) === '남자') {
        return "병무청에 가세요!";
    }

        // 병무청 안내 메시지가 해당되지 않는 경우 빈 문자열을 반환합니다.
        return "";
}

// 주민번호를 입력받아 성별과 병무청 안내 메시지를 확인합니다.
var idNumber = prompt('주민번호를 입력하세요 (예: YYMMDD-1234567):');
var resultGender = checkGender(idNumber);
var resultMilitaryOffice = checkMilitaryOffice(idNumber);

console.log("성별: " + resultGender);
console.log(resultMilitaryOffice);
