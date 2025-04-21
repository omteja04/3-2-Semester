import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class SubstitutionCipher {

    public static String encrypt(String text, String a, String b) {
        StringBuilder result = new StringBuilder();

        for (char c : text.toLowerCase().toCharArray()) {
            int index = a.indexOf(c);
            result.append(index != -1 ? b.charAt(index) : c);
        }

        return result.toString();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Define original and substituted alphabets
        String a = "abcdefghijklmnopqrstuvwxyz";
        String b = "zyxwvutsrqponmlkjihgfedcba"; // Reverse alphabet for substitution

        // Input from user
        System.out.print("Enter any string: ");
        String input = br.readLine();

        // Encrypt & decrypt (since it's self-reversible)
        String encrypted = encrypt(input, a, b);
        String decrypted = encrypt(encrypted, a, b); // Encrypting again reverses the process

        // Output results
        System.out.println("Encrypted Text: " + encrypted);
        System.out.println("Decrypted Text: " + decrypted);
    }
}
