package prac;
/*
 * dekho insertion sort ek type ki sorting hoti hai jisme hm array ki starting se elements ko sort krna shuru krte hain 
 * ek demo deta hun
 * input 12,11,13,5,6
 * hum shuruwat 2nd element se krte hain in this case 11
 * key = 11 and shift 12 in place of 11 
 * 11 12 13 5 6
 * key = 13
 * it should not be replaced as numebr before it are already in sorted manner
 * 11 12 13 5 6
 * key 5
 * now all element tilll 11 are bigger than key so shift each element one place right and place key in starting i.e.
 *  5 11 12 13 6
 *  now key = 6
 *  11, 12 and 13 are larger than 6 so move each of these one place right and place 6 at 2 place
 *  i.e 5 6 11 12 13
 *  
 */
public class InsertionSort {

	public static void main(String[] args) {
		int [] input = { 10,9,8,7,6,5,4,3,2,1};
		for(int i =1;i<10;i++)
		{
			int key = input[i];
			int j = i-1;
			while(j>=0&&input[j]>key)
			{
				input[j+1] = input[j];
				j--;
			}
			input[j+1] = key;
			for(int k =0;k<10;k++)
				System.out.print(input[k]+" ");	
		System.out.println();
		}
		

	}

}
