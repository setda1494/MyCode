function power(a,b)
{
    if (b == undefined) {
        return Math.pow(a, b);
    }
    else
    {
        b = 2;
        return Math.pow(a, b);
    }
}
function multiply(a, b, c, d, e) 
{
    return a * b * c * d * e;
}

var result1 = power(2,10);
console.log("r1_power "+result1);
var result2 = power(2);
console.log("r2_power "+result2);
var result3 = multiply(2,3,4,5,6);
console.log("r3_multiply "+result3);

