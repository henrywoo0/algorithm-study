class Solution {
    public int solution(int n, int m, int[] section) {
        int maxPainted = 0, cntPaint = 0;
        for (int point : section) {
            if (maxPainted <= point) {
                maxPainted = point + m;
                cntPaint++;
            }
        }
        return cntPaint;
    }
}