// 로직으로는 맞지만, 시간 초과 오류남
// 보완 필요
import java.util.*;

class Solution {
    public String[] solution(String[] players, String[] callings) {
        
        List<String> playerList = Arrays.asList(players);
        
        for (String calling : callings) {
            int idx = playerList.indexOf(calling);
            if (idx > 0) {
                String temp = playerList.get(idx - 1);
                playerList.set(idx - 1, calling);
                playerList.set(idx, temp);
            }
        }
        
        return playerList.toArray(new String[players.length]);
    }
}