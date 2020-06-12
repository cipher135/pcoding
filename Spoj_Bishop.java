import java.math.BigInteger;
import java.io.*;
public class Spoj_Bishop{
	static BigInteger bishop(String n){
		BigInteger num = new BigInteger(n);
		if (num.compareTo(BigInteger.ONE)==0) return BigInteger.ONE;
		BigInteger two = new BigInteger("2");
		BigInteger f = two.multiply(num.subtract(BigInteger.ONE));
		return f;
	}
	public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String number = new String();
		number = br.readLine();
		while(number != null ){
			System.out.println(bishop(number));
			number = br.readLine();
		}

	}
}
