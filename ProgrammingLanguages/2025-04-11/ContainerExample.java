// ContainerExample.java
class Container {
   public int value;
}


public class ContainerExample {

   public static void main (String[] args) {

      Container w1 = new Container();
      Container w2 = new Container();
      w1.value = 1;
      w2 = w1;
      System.out.println(w1.value + " " + w2.value);
      w2.value = 2;
      System.out.println(w1.value + " " + w2.value);
   }
}
