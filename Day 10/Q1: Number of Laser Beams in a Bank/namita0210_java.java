public class namita0210_java{
        public class NumberOfLaserBeams {
        public int numberOfLaserBeams(String[] bank) {
            int m = bank.length;
            int n = bank[0].length();
            int result = 0;

            for (int i = 0; i < m - 1; i++) {
                for (int j = i + 1; j < m; j++) {
                    if (isValidPair(bank, i, j, n)) {
                        result += countBeams(bank, i, j, n);
                    }
                }
            }

            return result;
        }

        private boolean isValidPair(String[] bank, int r1, int r2, int n) {
            for (int k = r1 + 1; k < r2; k++) {
                for (int col = 0; col < n; col++) {
                    if (bank[k].charAt(col) == '1') {
                        return false; // Condition violated
                    }
                }
            }
            return true;
        }

        private int countBeams(String[] bank, int r1, int r2, int n) {
            int[] dp1 = new int[n]; // Number of empty cells between r1 and r2 on row r1
            int[] dp2 = new int[n]; // Number of empty cells between r1 and r2 on row r2

            for (int col = 0; col < n; col++) {
                dp1[col] = (bank[r1].charAt(col) == '0') ? (col > 0 ? dp1[col - 1] : 0) + 1 : 0;
                dp2[col] = (bank[r2].charAt(col) == '0') ? (col > 0 ? dp2[col - 1] : 0) + 1 : 0;
            }

            int beams = 0;
            for (int col1 = 0; col1 < n; col1++) {
                for (int col2 = col1; col2 < n; col2++) {
                    if (dp1[col2] >= col2 - col1 + 1 && dp2[col2] >= col2 - col1 + 1) {
                        beams++;
                    }
                }
            }

            return beams;
        }

        
    }

}