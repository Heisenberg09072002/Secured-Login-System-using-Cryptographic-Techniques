# Secured-Login-System-using-Cryptographic-Techniques
Our objective is to make secured login system using Cryptographic Techniques. 
Our objective is to make secured login system using Cryptographic Techniques. 
In todays world if someone logs in then their user details like username and password should be encrypted, so that if someone by any method hacks it then he/she will get encrypted text which they can’t understand. Our project aims to make a secured login system where when user registers than their details get encrypted. When user signin than the user details get checked by decrypted data. 
Our goals is to make a project which will be simpler to use and easy to understand and will help the user to securely login into the project

TOOLS AND TECHNOLOGIES USED

In cryptography, a cipher (or cypher) is an algorithm for performing encryption or decryption—a series of well-defined steps that can be followed as a procedure.
When using a cipher the original information is known as plaintext, and the encrypted form as ciphertext. The ciphertext message contains all the information of the plaintext message, but is not in a format readable by a human or computer without the proper mechanism to decrypt it.
The operation of a cipher usually depends on a piece of auxiliary information, called a key.
The encrypting procedure is varied depending on the key, which changes the detailed operation of the algorithm. A key must be selected before using a cipher to encrypt a message. Without knowledge of the key, it should be extremely difficult, if not impossible, to decrypt the resulting ciphertext into readable plaintext.

IMPLEMENTATION DETAILS
We started the coding implementation in VS Code. Firstly, the user will get 2 options of Login and SignUp. When the user signs up, a file is created with user details(plain text) an then using Cryptography a new file called encrypt.txt is created with the cipher text. When user sign ins, the encrypted file gets decrypted and a new filed called decrypt.txt is created. After this, the user details are checked and if correct, login is successful, else, they get returned to the menu.
It will be a C++ project which will be using cryptographic techniques mainly cryptography which 
will be taking input from user and storing in the encoded way int the file. Which will be 
efficient and easy to use for the user
