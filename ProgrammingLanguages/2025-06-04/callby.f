      subroutine foo(x)
      integer :: x
      x = 6
      end subroutine foo

      program main
      integer :: a = 5
      print *, 'a = ', a
      call foo(a)
      print *, 'a = ', a
      end program main
