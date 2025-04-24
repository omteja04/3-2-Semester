import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import java.util.Base64;
import java.util.Scanner;

class DES {
    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);

            // Generate a DES Key
            KeyGenerator keyGen = KeyGenerator.getInstance("DES");
            keyGen.init(56); // DES uses a z56-bit key
            SecretKey secretKey = keyGen.generateKey();

            // Display the secret key in Base64 format
            String encodedKey = Base64.getEncoder().encodeToString(secretKey.getEncoded());
            System.out.println("Generated Key (Base64): " + encodedKey);

            // User input for the plain text
            System.out.print("Enter the plain text: ");
            String plainText = scanner.nextLine();

            // Encrypt the plain text
            String cipherText = encrypt(plainText, secretKey);
            System.out.println("Encrypted Text: " + cipherText);

            // Decrypt the cipher text
            String decryptedText = decrypt(cipherText, secretKey);
            System.out.println("Decrypted Text: " + decryptedText);

            scanner.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // Encryption method
    public static String encrypt(String data, SecretKey key) throws Exception {
        Cipher cipher = Cipher.getInstance("DES");
        cipher.init(Cipher.ENCRYPT_MODE, key);
        byte[] encryptedData = cipher.doFinal(data.getBytes());
        return Base64.getEncoder().encodeToString(encryptedData);

    }

    // Decryption method
    public static String decrypt(String encryptedData, SecretKey key) throws Exception {
        Cipher cipher = Cipher.getInstance("DES");
        cipher.init(Cipher.DECRYPT_MODE, key);
        byte[] decodedData = Base64.getDecoder().decode(encryptedData);
        byte[] decryptedData = cipher.doFinal(decodedData);
        return new String(decryptedData);
    }
}