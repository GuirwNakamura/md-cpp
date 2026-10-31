PROGRAM hello
    implicit none

    integer :: i = 2
    real(8) :: j = 4.2d0
    complex :: z = (1.0, 2.0)

    print *, 'hello'

    call dump(real(i, 8), j)

CONTAINS

    SUBROUTINE dump(x, y)
        IMPLICIT none
        real(8), intent(in) :: x, y
        real(8) :: out 
        out = sqrt(x**2 + y**2)
        print *, out
    END SUBROUTINE dump

END PROGRAM hello

