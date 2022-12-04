function calculation(...numbers){
    let sum=0
    for(let i of numbers){
        sum+=i
    }
console.log(sum)
}
function multi_parameter(a,b,...nums){
    nums = [a,...nums]
    a = [...nums,b]
    console.log(nums)
    let sum=0
    for(let i of nums){
        sum+=i
    }
    let asum=0
    for(let i of a){
        asum+=i
    }
    console.log(asum)
    console.log(sum)
}
calculation(1,2,3,4,5,6)
multi_parameter(10,20,40,3,5,4,7)