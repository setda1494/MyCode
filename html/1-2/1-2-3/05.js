let out = '';
for (let i = 0; i<10 ; i++) {
    for (let j =0; j<i+1; j++) {
        out += '*';
    }
    out += '\n';
}
console.log(out);