import java.util.* ;
import java.io.*; 
public class Solution {
    public static void setZeros(int matrix[][]) {
        int rflag = 0, cflag = 0;
        int n = matrix.length;
        int m = matrix[0].length;
        for(int i = 0; i < m; i++) {
            if(matrix[0][i] == 0)
                rflag = 1;
        }
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0)
                cflag = 1;
        }
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
               }
            }
        }
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
            }
        }
        if(rflag == 1) {
            for(int i = 0; i < m; i++)
                matrix[0][i] = 0;
        }
        if(cflag == 1){
            for(int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
    }

}