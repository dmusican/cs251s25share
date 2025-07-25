import java.util.Arrays;

public class SortFun {
    public static void main(String[] args) {
        String[] words = {"a", "horse", "is", "happiest", "now"};
        System.out.println(Arrays.toString(words));

        Arrays.sort(words, (a,b) -> a.length() - b.length());

        System.out.println(Arrays.toString(words));
    }
}
