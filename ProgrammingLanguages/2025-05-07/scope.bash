x="3"

function fun1
{
    local x="4"
    fun2;
}

function fun2
{
    echo $x;
}

fun1
