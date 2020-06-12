import java.math.BigInteger;
import java.util.Scanner;
public class Spoj_Julka2{
    public static void main(String args[]){
        int c = 10;
        Scanner sc = new Scanner(System.in);
        while(c>0){
            BigInteger t = new BigInteger( sc.nextLine() );
            BigInteger m = new BigInteger( sc.nextLine() );

            System.out.println(t.add(m).divide( BigInteger.valueOf(2) ));
            System.out.println(t.subtract(m).divide( BigInteger.valueOf(2) ));

            c -=1;
        }
    }
}
