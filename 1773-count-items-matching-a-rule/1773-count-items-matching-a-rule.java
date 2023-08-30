class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int i=-1,count=0;
        switch(ruleKey){
            case "type":i=0;
                break;
            case "color":i=1;
                break;
            case "name":i=2;
                break;
        }
        for(int j=0;j<items.size();j++){
            if((items.get(j).get(i)).equals(ruleValue)){
               System.out.println(items.get(j).get(i));
                count++;
            }
        }
        return count;
    }
}