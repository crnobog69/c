def main {
    int x;
    char c;
    
    // Old way (two commands):
    print = "Enter a number: ";
    input x;
    
    // New way (one command):
    scan "Enter a number: " x;    // Prints prompt and gets input in one line
    
    // Can be used with different types:
    scan "Enter a character: " c;
    
    print = "You entered:";
    print x;
    print c;
}

main;
judge 