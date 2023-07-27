int addTwoNum()
{
    // declare variables x & y as external variables within a function
    extern int x, y;
    
    // assign values to external variables x & y
    x = 1, y = 2;

    return x + y;
}