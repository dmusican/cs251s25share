$x = 1;

sub fun1 {
    # my $x = 2;
    local $x = 2;
    fun2();
}

sub fun2 {
    print "$x\n";
}

fun1();
