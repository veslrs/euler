function mul_3_5(lim::Int)
    sum = 0
    for i = 1:lim-1
        if i % 3 == 0 || i % 5 == 0
            sum +=i
        end
    end
    println("sum of all the multiples of 3 or 5 below 1000 = ", sum)
end
