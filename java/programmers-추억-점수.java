class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {
        
        int[] answer = new int[photo.length];
        
        for (int i = 0; i < photo.length; i++) {
            int count = 0;
            for (String str : photo[i]) {
                int index = findString(name, str);
                if (index != -1) {
                    count += yearning[index];
                }
            }
            answer[i] = count;
        }
        
        return answer;
    }
    
    private int findString(String[] searchArray, String target) {
        for (int i = 0; i < searchArray.length; i++) {
            if (searchArray[i].equals(target)) {
                return i;
            }
        }
        return -1;
    }
}