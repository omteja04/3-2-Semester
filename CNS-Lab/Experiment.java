import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class SubstitutionCipher {

    public static void main(String[] args) throws IOException {
        String a = "abcdefghijklmnopqrstuvwxyz";
        String b = new StringBuilder(a).reverse().toString();
        System.out.print("Enter any String (Lowercase Only): ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        String encrypt = "";
        char ch;
        for (int i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            int j = a.indexOf(ch);
            if (j != -1) {
                encrypt += b.charAt(j);
            } else {
                encrypt += ch;
            }
        }
        System.out.println("The Encrypted Data: " + encrypt);

    }

}