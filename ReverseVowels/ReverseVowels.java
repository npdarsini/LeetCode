public class ReverseVowels {
    public String reverseVowels(String s) 
    {
        if(s== "" || s == null)
        return s;
        
        char [] a = s.toCharArray();
        int left=0, right = s.length()-1;
         while(left<right )
	        {
	        	if(!(a[left]== 'a' || a[left]== 'e' || a[left]== 'i' || a[left]== 'o' || a[left]== 'u' || a[left]== 'A' || a[left]== 'E' || a[left]== 'I' || a[left]== 'O' || a[left]== 'U'))
	            {
	               left++;
	            }
	        	else if(!(a[right]== 'a' || a[right]== 'e' || a[right]== 'i' || a[right]== 'o' || a[right]== 'u' || a[right]== 'A' || a[right]== 'E' || a[right]== 'I' || a[right]== 'O' || a[right]== 'U'))
	            {
	            	right--;

		        }
	            else
	            {
	            		            	
	            	char temp = a[left];
	            	a[left] = a[right];
	            	a[right] = temp;
	            	
	            	left++;
	            	right--;
	            	
	          	                    
	            }
                
	            
	            }

	        
	        return String.valueOf(a);

    }
}