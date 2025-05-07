x = 1

def fun1():
    x = 2
    fun2()

def fun2():
    print(x)

fun1()
