package prac;
/*
 * Is program mein m apko prime number nikalna btaunga given input n we have to give all prime numbers less than n
 * definition of prime numbers is any number which is divisible by 1 and itself no other number in between.
 * this problem is a one of the important problem in computer history because finding prime numbers is  a challenging task
 * so i will tell you method of finding primes numbers less than 1000000 /i.e. 10^6 because of memory limitations
 * method name is sieve of Erathanmoues nomally called "sieve"
 * 
 * we initialise an array of required size but it should be less than 10^6
 * what we do in this method is that first step we neglect all the multiples of 2
 * then in second step what we do is neglect all multiples of 3 , 5,7 till square root of size this is mathematical proved that 
 * no number will its divisor greater then its square root that why we check divisor till square root of size
 * and for each such divisor to avoid repeatation in order to make program run faster a simple trick is used that
 * if number is 3 then start ommiting numebrs which has 3 as its divisor in a particuler fashion like for 3 : 9,15,21....
 * for 5 : 25, 35 , 45 ...
 * for 7 : 49 , 63 ..
 * for 9 : 81 ,99...
 * this trick is done to minimise the repeatation
 * 
 * 
 * 
 * change the value of variable szie and this program will print all primes till that number.
 *  */
public class Prime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int size = 100;
		boolean []num = new boolean[size];
		for(int i =4;i<size;i = i+2)
			num[i] = true; // marking all divisible of 2 true
		for(int i =3;i<=Math.sqrt(size);i = i+2)
		{
			for(int j = i*i;j<size;j = j + 2*i)
				if(!num[j])
					num[j] = true;
		}
		for(int i =2;i<size;i++)
		if(!num[i])
			System.out.println(i);
	}

}
