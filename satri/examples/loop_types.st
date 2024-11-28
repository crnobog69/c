def countdown {
    int n;
    scan "Enter a number to count down from: " n;
    
    while (n > 0) {
        print n;
        n = n - 1;
    }
}

def sum_to_n {
    int n, sum;
    sum = 0;
    
    scan "Enter number to sum up to: " n;
    
    while (n > 0) {
        sum = sum + n;
        n = n - 1;
    }
    
    print = "Sum is:";
    print sum;
}

countdown;
sum_to_n;
judge 