class Solution {
    public int[] solution(String[] keymap, String[] targets) {

        int[] result = new int[targets.length];

        for (int i = 0; i < targets.length; i++) {

            int count = 0;

            for (char alphabet : targets[i].toCharArray()) {

                int index = Integer.MAX_VALUE;
                int notFoundCount = 0;

                for (String key : keymap) {
                    if (key.contains(String.valueOf(alphabet))) {
                        index = Math.min(index, key.indexOf(alphabet));
                    } else {
                        notFoundCount++;
                    }
                }

                if (notFoundCount == keymap.length) {
                    count = -1;
                    break;
                }

                count += index + 1;
            }
            result[i] = count;
        }

        return result;
    }
}