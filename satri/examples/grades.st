def grades {
    int math, science, history, english;
    
    print = "Enter 4 grades (separated by spaces):";
    input math, science, history, english;  // User can input like: "85 92 78 88"
    
    print = "Individual grades:";
    print math;
    print science;
    print history;
    print english;
    
    print = "Average grade:";
    print (math + science + history + english) / 4;
    
    if ((math + science + history + english) / 4 > 90) {
        print = "Excellent student!";
    } else {
        print = "Keep working hard!";
    }
}

grades;
krvavimeridijan;
judge 