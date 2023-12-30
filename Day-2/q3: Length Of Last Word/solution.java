import java.util.*;

public class day2_q3_solution {
    public static int func(String[] str) {
        return str[str.length - 1].length();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the string");
        String s = sc.nextLine();
        String[] str = s.trim().split(" ");
        System.out.println(func(str));

    }
}
