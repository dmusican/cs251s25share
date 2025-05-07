public class Scope {

    public int x = 1;

    public void fun1() {
        int x = 2;
        fun2();
    }

    public void fun2() {
        System.out.println(x);
    }

    public static void main(String[] args) {
        Scope thingy = new Scope();
        thingy.fun1();
    }
}
