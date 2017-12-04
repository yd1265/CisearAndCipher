            #include <iostream>
            #include <string>
            using namespace std;

            ///** this program allow us to crypt or decrypt a message using a key
        static char Cipher(char ch, int key);
        static string Encipher(string input, int key) ;
        static string Decipher(string input, int key);

        /// this function allow to return the good value shifted with the key
            static char Cipher(char ch, int key){
            if (!isalpha(ch))
                return ch;
            char offset = isupper(ch) ? 'A' : 'a';
            return (char)((((ch + key) - offset) % 26) + offset);
        }  /// end of the function



        /// encipher the message with the key
        static string Encipher(string input, int key)
        {
            string output = "";

            for ( auto ch :input)
                output += Cipher(ch, key);

            return output;
        } /// end of the function



        /// decipher the message with the key
        static string Decipher(string input, int key)
        {
            return Encipher(input, 26 - key);
        } /// end of the function

            int main()
            {

             cout << "Encryption Decryption" << endl;
             cout << " Give the message you want crypt"  << endl;
              string mgs;
              getline(cin, mgs);
              cout << "Give the encryption key" << endl;
              int key;
              cin>> key;
               string cryptmessage=Encipher(mgs,key);
               cout << " Your message  "<< mgs << " is encrypt to " << cryptmessage << endl;

              cout << "Give the message you want to decrypt" << endl;
              string message;
               cin>> message;
              cout << " Give the decryption key" << endl;
              int cle;
              cin>> cle;
               string decrypttmessage=Decipher(message,cle);
               cout << " Your crypted  message  "<< message << " is decrypted to " << decrypttmessage << endl;
               cout << "Thank You "<< endl;

                return 0;
            }
