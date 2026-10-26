# 1
In an entry-condition loot the test is located at the beginning and in an exit-condition loop it's located at the exit. 

for - entry condition
while - entry condition
do while - exit condition

# 2
01234

# 3
0369
12

# 4
6
8

# 5
 k = 8

# 6
for (int i = 1; i < 64; i*= 2)
        std::cout << i << " ";
    std::cout << std::endl;

# 7
You separate them with a comma.

# 8
x = (1,024);

x = (1,024); -> x = 024;

Yes, but x will be initialized to 20 (0 = octal 24 -> 2*8¹ + 4*8⁰ = 16 + 4 = 20) (because of the comma).

In C++, the comma , has a lowest-priority operator status, much like + or *. Its built-in rule states: evaluate the left side, discard the result, evaluate the right side, and return that final value.

y = 1,024;

y = 1

y = 1,024; -> (y = 1), 024; 

= has priority over ,

# 9
cin >> ch - only reads traditional charachters, skips space newline and tab.

cin.get(ch) - reads next character regardless of it's value and places it in ch. If EOF return false.

ch = cin.get() - reads next character regardless of it's value and places it in ch. If EOF return value of EOF.
