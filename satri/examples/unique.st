def main {
    int x, y;
    
    // Get a random number between x and y
    scan "Enter range (min max): " x, y;
    print = "Random number in range:";
    print random x, y;
    
    // Check if a number is palindrome
    scan "Enter number to check palindrome: " x;
    if (palindrome x) {
        print = "Number is palindrome!";
    } else {
        print = "Number is not palindrome!";
    }
    
    // Generate Fibonacci sequence
    scan "Enter Fibonacci length: " x;
    print = "Fibonacci sequence:";
    fibonacci x;  // Prints first x numbers of Fibonacci sequence
    
    // Check if prime
    scan "Enter number to check prime: " x;
    if (prime x) {
        print = "Number is prime!";
    } else {
        print = "Number is not prime!";
    }
    
    // Reverse a number
    scan "Enter number to reverse: " x;
    print = "Reversed number:";
    print reverse x;
    
    // Shuffle digits in a number
    scan "Enter number to shuffle: " x;
    print = "Shuffled number:";
    print shuffle x;
}

main;
judge 