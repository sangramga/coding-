import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.util.Scanner;


public class pangrams {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
	//	System.out.println("hello");
		// TODO Auto-generated method stub
		int [] alphbet = new int[26];
		for(int i =0;i<26;i++)
			alphbet[i] = 0;
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		for(int i =0;i<str.length();i++){
			if(str.charAt(i)>=65&&str.charAt(i)<=90){
			//	System.out.println(str.charAt(i)+" "+(str.charAt(i)-'A'));
				alphbet[str.charAt(i)-'A'] = -1;
			}
			if(str.charAt(i)>=97&&str.charAt(i)<=122)
			{	//			System.out.println(str.charAt(i)+" "+(str.charAt(i)-'a'));
				alphbet[str.charAt(i)-'a'] = -1;
			}
		}
		
		for(int i =0;i<26;i++){
			
			if(alphbet[i]!= -1){
				System.out.println("not pangram");
				return;
			}
		}
		System.out.println("pangram");
		
				
	

		
		
		
	}

}
