param lim = 1000;
var sum = 0;

for i in 1..lim - 1 {
    writeln(i);
    if i % 3 == 0 || i % 5 == 0 then sum += i;
}

writeln("sum of all the multiples of 3 or 5 below 1000 = ", sum);
