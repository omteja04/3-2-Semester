import java.io.*;

public class SubstitutionCipher {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Defining original and substituted alphabets
        String a = "abcdefghijklmnopqrstuvwxyz";
        String b = "zyxwvutsrqponmlkjihgfedcba"; // Reverse alphabet for simple substitution

        // Input from user
        System.out.print("Enter any string: ");
        String str = br.readLine().toLowerCase(); // Convert input to lowercase for consistency

        String encrypt = ""; // String to store encrypted text

        // Encrypting the input string
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            int j = a.indexOf(c); // Finding the index of character in original string

            if (j != -1) {
                encrypt += b.charAt(j); // Substitute with corresponding character from 'b'
            } else {
                encrypt += c; // Keep special characters and spaces unchanged
            }
        }

        // Output the encrypted data
        System.out.println("The encrypted data is: " + encrypt);
    }
}