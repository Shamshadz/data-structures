import java.util.*;

public class largestSubString
{
	public static void main(String[] args) {

        String s = "abcabcdab";
        Stack<Character> stack = new Stack<>();
        String cmp1="";
        String cmp2="";
        // System.out.println(s.length());
        for(int i=0;i<s.length();i++){
            // System.out.println(stack.contains(s.charAt(i)));
            if(stack.contains(s.charAt(i))){
                // cmp2 += s.charAt(i);
                while(!stack.isEmpty()){
                    cmp2 += stack.pop();
                }
                stack.push(s.charAt(i));
                // System.out.println(cmp2);
                if(cmp1.length()<cmp2.length()){
                    cmp1 = cmp2;
                    cmp2 = "";
                    // System.out.println(cmp1);
                }
                cmp2 = "";
            }else{
                stack.push(s.charAt(i));
                cmp1+=s.charAt(i);
            }
        }
        System.out.println(cmp1);
    }
}