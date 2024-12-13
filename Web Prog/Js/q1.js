<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial and Table</title>
    <script>
        function factorial() {
            let num = parseInt(document.getElementById("inp").value);
            let fact = 1;
            for (let i = 1; i <= num; i++) {
                fact *= i;
            }
            document.getElementById("res").innerHTML = `The factorial of ${num} is ${fact}`;
        }

        function printTable() {
            let num = parseInt(document.getElementById("inp").value);
            let str = "<table border='1'>";

            for (let k = num; k <= num + 5; k++) {
                for (let i = 1; i <= 10; i++) {
                    let res = k * i;
                    str += `<tr><td>${k}</td><td>*</td><td>${i}</td><td>=</td><td>${res}</td></tr>`;
                }
            }

            str += "</table>";
            document.getElementById("res").innerHTML = str;
        }
    </script>
</head>
<body>
    <h2>Factorial and Multiplication Table</h2>
    Enter the number: <input type="text" id="inp"><br>
    <button onclick="factorial()">Calculate Factorial</button>
    <button onclick="printTable()">Print Table</button><br><br>
    <div id="res"></div>
</body>
</html>
