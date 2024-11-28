def calculator {
    int x, y;
    char operation;
    
    read = "Enter two numbers and operation (+,-,*,/): " x, y, operation;
    
    print = "Result:";
    if (operation == '+') {
        print x + y;
    } else if (operation == '-') {
        print x - y;
    } else if (operation == '*') {
        print x * y;
    } else if (operation == '/') {
        print x / y;
    } else {
        print = "Invalid operation!";
    }
}

calculator;
judge 