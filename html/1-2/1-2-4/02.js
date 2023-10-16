let product =
{
    name : "banana",
    prise : 1200,
    
}

console.log("한번에 하나씩1(내가 직접침)");
console.log(product.name);
console.log(product.prise);
console.log("---------");
console.log("한번에 하나씩2([]사용)");
console.log(product['name']);
console.log(product['prise']);
console.log("---------");
console.log("한번에 하나씩3(for문)");
for (let key in product) {
    console.log(`${key}:${product[key]}`)
    
}
console.log("---------");
console.log("한번에 전부");
console.log(product);
