program main
    implicit none
    integer :: lim, sum, i
    lim = 999
    sum = 0
    do i = 1, lim
        if (mod(i, 3) == 0 .or. mod(i, 5) == 0) sum = sum + i 
    end do
    write(*, '("sum of all the multiples of 3 or 5 below 10 = ", I0)') sum
end program main
