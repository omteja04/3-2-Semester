import java.util.Scanner;

class HillCipher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the 2*2 Matrix(Space-Separated)");
        int[][] keyMatrix = new int[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                keyMatrix[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter plaintext (in UpperCase, No Spaces)");
        String plaintext = sc.next();
        if (plaintext.length() % 2 != 0) {
            plaintext += 'X';
        }
        int[] plaintextVector = new int[plaintext.length()];
        for (int i = 0; i < plaintext.length(); i++) {
            plaintextVector[i] = plaintext.charAt(i) - 'A';
        }

        StringBuilder cipherText = new StringBuilder();
        for (int i = 0; i < plaintextVector.length; i += 2) {
            int[] cipherVector = new int[2];
            for (int j = 0; j < 2; j++) {
                cipherVector[j] = (keyMatrix[j][0] * plaintextVector[i] + keyMatrix[j][1] * plaintextVector[i + 1])
                        % 26;
            }
            for (int val : cipherVector) {
                cipherText.append((char) (val + 'A'));
            }
        }
        System.out.println("Cipher Text: " + cipherText);
        sc.close();
    }
}
