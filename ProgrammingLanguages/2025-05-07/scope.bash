x="1"

function fun1
{
    local x="2"
    fun2;
}

function fun2
{
    echo $x;
}

fun1
