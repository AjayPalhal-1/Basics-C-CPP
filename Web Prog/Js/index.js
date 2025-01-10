


arr = ["AJAY" , 'ANKUSH',"AMOL",'PRAVIN','BM']
console.table(arr)


obj =[
    {id : 1 , Name : "Ajay" , Salary : 550000},
    {id : 1 , Name : "Amol" , Salary : 550000},
    {id : 1 , Name : "Pravin" , Salary : 550000},
    {id : 1 , Name : "Ap" , Salary : 550000},
    {id : 1 , Name : "BM" , Salary : 550000},



    obj2= {
        name : "AJAY",
        age : 23,
        HomeTown : "SambhajiNagar",
        Role : "Software Developer"
    }
]



brr = ["Ap","PK","Bm","Ap","PK","Bm"]

console.table(obj)
console.table(obj2)
console.table(brr)


const matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];
console.table(matrix);




console.groupEnd(obj2)
// console.log('%cStyled Log Example', 'color: white; background: blue; font-size: 16px; padding: 5px;');


const generateData = (n) => Array.from({ length: n }, (_, i) => ({
    Index: i + 1,
    Random: Math.floor(Math.random() * 100),
    Square: (i + 1) ** 2
}));

console.table(generateData(5));
