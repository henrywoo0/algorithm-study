class Solution {
    public int solution(String s) {
        
        int answer = 0;
        int firstCount = 0;
        int otherCount = 0;
        char first = 0;
        
        first = s.charAt(0);
        firstCount = 0;
        
        for(int i = 0; i < s.length(); i++) {
            
            if (s.charAt(i) == first) {
                firstCount++;
            } else {
                otherCount++;
            }
            
            if (i == s.length() - 1) {
                answer++;
            } else if (firstCount == otherCount) {
                answer++;
                first = s.charAt(i + 1);
                firstCount = 0;
                otherCount = 0;
            }
        }
        
        return answer;
    }
}