import java.util.Scanner;

public class CaesarCipher {
    // Helper method to shift a character
    private static char shiftChar(char c, int k) {
        if (Character.isUpperCase(c)) {
            return (char) ('A' + (c - 'A' + k) % 26);
        } else if (Character.isLowerCase(c)) {
            return (char) ('a' + (c - 'a' + k) % 26);
        }
        return c; // Leave non-alphabetic characters unchanged
    }

    // Encrypt method
    public static String encrypt(String text, int k) {
        StringBuilder result = new StringBuilder();
        k = (k % 26 + 26) % 26; // Handle negative shifts

        for (char c : text.toCharArray()) {
            result.append(shiftChar(c, k));
        }
        return result.toString();
    }

    // Decrypt method
    public static String decrypt(String text, int k) {
        return encrypt(text, -k); // Decryption is just shifting in the opposite direction
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter text: ");
        String text = scanner.nextLine();

        System.out.print("Enter shift value: ");
        int k = scanner.nextInt();

        String encryptedText = encrypt(text, k);
        System.out.println("Encrypted Text: " + encryptedText);

        String decryptedText = decrypt(encryptedText, k);
        System.out.println("Decrypted Text: " + decryptedText);

        scanner.close();
    }
}
