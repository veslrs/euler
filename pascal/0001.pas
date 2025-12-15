program hello;
var
    lim: Int32 = 1000;
    sum: Int32 = 0;
    i: integer;
begin
    for i := 1 to lim - 1 do
    begin
        if (i mod 3 = 0) or (i mod 5 = 0) then sum += i;
    end;
    writeln ('sum of all the multiples of 3 or 5 below 1000 = ', sum);
end.
