program main
    implicit none
    integer(8) :: lim, base, sum, square
    lim = 262000
    base = 1
    sum = 0
    do while (base <= lim)
        square = base**2
        if (modulo(square, 2) == 1) sum = sum + square
        base = base + 1
    end do
    write(*, '("sum of all odd square numbers under 262000: ", I0)') sum
end program main
