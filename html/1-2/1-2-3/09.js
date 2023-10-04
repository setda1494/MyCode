function sum(min,max)
{
    let output = 1;
    for (let i = min; i <= max; i++) {
        output+=1;
    }
    return output;
}
console.log(sum(1,100));