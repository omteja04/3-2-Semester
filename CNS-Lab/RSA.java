import java.math.BigInteger;
import java.util.Scanner;

public class RSA {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input prime numbers
        System.out.print("Enter the first prime number (p): ");
        BigInteger p = scanner.nextBigInteger();

        System.out.print("Enter the second prime number (q): ");
        BigInteger q = scanner.nextBigInteger();

        // Compute n = p * q
        BigInteger n = p.multiply(q);
        System.out.println("n (p * q) = " + n);

        // Compute phi(n) = (p - 1) * (q - 1)
        BigInteger phi = (p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
        System.out.println("phi(n) ( (p-1) * (q-1) ) = " + phi);

        // Find public key exponent e
        BigInteger e = findE(phi);
        System.out.println("Public key exponent (e): " + e);

        // Compute private key exponent d
        BigInteger d = e.modInverse(phi);
        System.out.println("Private key exponent (d): " + d);

        // Encrypt a message
        System.out.print("Enter a plain text number to encrypt: ");
        BigInteger plainText = scanner.nextBigInteger();

        // Encryption: cipherText = (plainText^e) mod n
        BigInteger cipherText = plainText.modPow(e, n);
        System.out.println("Encrypted message (cipher text): " + cipherText);

        // Decryption: decryptedText = (cipherText^d) mod n
        BigInteger decryptedText = cipherText.modPow(d, n);
        System.out.println("Decrypted message (plain text): " + decryptedText);

        scanner.close();
    }

    // Function to find e such that 1 < e < phi and gcd(e, phi) = 1
    private static BigInteger findE(BigInteger phi) {
        BigInteger e = BigInteger.valueOf(2);
        while (e.compareTo(phi) < 0) {
            if (phi.gcd(e).equals(BigInteger.ONE)) {
                break;
            }
            e = e.add(BigInteger.ONE);
        }
        return e;
    }
}