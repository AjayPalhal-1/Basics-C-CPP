function sum(num1, num2) {
  "use strict";
  num1 = 10;
  num2 = 10;
    return arguments[0] + arguments[1];
//   return num1 + num2;
}
console.log(sum(4, 4));



function sumall(...args) {
    return  args.reduce((sum , num) => sum + num);
};

console.log("Addition : "+ sumall(1,2,3,4,5))



function multply(...args){
    return args.reduce((mul , num )=> mul* num);

}
console.log("Multiplication : ", multply(1,2,3,4,5))


function sumAll(...args) {
    // "use strict";
    args[0] = 100; 
    return args.reduce((sum , num)=>(sum + num))

    // console.log(args); // [100, 2, 3, 4, 5]
  }


  console.log("Final : " ,sumAll(1, 2, 3, 4, 5));
  

  function argcal(...args){
    return args.length;
  }

  console.log("Total Argument  :" , argcal(1,2,3,4,566,5))



  console.log("Final : " ,sumAll(1, 2, 3, 4, 5));
  

  function argcalprint(...args){
     for( i =0;i<args.length;i++)
        {
            console.log(args[i])
        };
  }


  console.log("Total Argument Printing :");
  argcalprint(1, 2, 3, 4, 566, 4,6,6,7,7,8676,87,878787,3,8989,9,89898,5);