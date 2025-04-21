import java.util.Scanner;

class HillCipher {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input 2x2 Key Matrix
        System.out.println("Enter the 2x2 matrix (space-separated):");
        int[][] keyMatrix = new int[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                keyMatrix[i][j] = scanner.nextInt();
            }
        }

        // Input plaintext
        System.out.println("Enter plaintext (in uppercase, no spaces):");
        String plainText = scanner.next();

        // If length of plaintext is odd, append 'X'
        if (plainText.length() % 2 != 0) {
            plainText += "X";
        }

        // Convert plaintext to integer vector
        int[] plainTextVector = new int[plainText.length()];
        for (int i = 0; i < plainText.length(); i++) {
            plainTextVector[i] = plainText.charAt(i) - 'A';
        }

        // Hill Cipher encryption
        StringBuilder cipherText = new StringBuilder();
        for (int i = 0; i < plainTextVector.length; i += 2) {
            int[] cipherVector = new int[2];

            for (int j = 0; j < 2; j++) {
                cipherVector[j] = (keyMatrix[j][0] * plainTextVector[i] +
                        keyMatrix[j][1] * plainTextVector[i + 1]) % 26;
            }

            // Convert back to characters and append to cipherText
            for (int val : cipherVector) {
                cipherText.append((char) (val + 'A'));
            }
        }

        // Output the cipher-text
        System.out.println("CipherText: " + cipherText);

        scanner.close();
    }
}
