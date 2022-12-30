var name = function(name_value){  //let and var both are similar 
    return name_value  //use of semi-colon ';' is user independent
}

var full_name = function(name){ // a dynamic function can be placed into a variable and no need to declare the function name 
    return name;                   // and the variable is holding the hole function
}

console.log(name("My name is " + 'Nahid Hasan Arif'))  // '' and "" both are similar here to use
console.log(full_name('My full name is '+'Md. Nahid Hasan Arif')); // here + sign is use to add the string
console.log("Nahid is learning","JS ES6") //in this section by using comma ',' a space between two string is added
console.log("Nahid is learning "+"JavaScript ES6") //in console.log multiple there is multiple ways to add string/sentences
