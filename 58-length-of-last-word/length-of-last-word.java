class Solution {
    public int lengthOfLastWord(String s) {
      s=s.trim();
     // System.out.print(s.trim());
     String[] words= s.split("\\s+");

      return words[words.length-1].length();
    }
}