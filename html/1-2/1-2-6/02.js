function age(a) {
    if (a >= 20) {
        console.log(`당신의 나이가 ${a} 이기 때문에 알바 가능`);
    }
    else if (a < 20) {
        console.log(`당신의 나이가 ${a} 이기 때문에 알바 불가`);
    }
}

age(19)