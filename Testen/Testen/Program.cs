using System.Security.Cryptography;

class Program
{
    static void Main()
    {
        // Ein Array für die Zufallsbytes
        byte[] randomBytes = new byte[32]; // 32 Bytes = 256 Bit

        // Erstelle eine Instanz des RNGCryptoServiceProvider
        using (RNGCryptoServiceProvider rng = new RNGCryptoServiceProvider())
        {
            // Fülle das Array mit zufälligen Bytes
            rng.GetBytes(randomBytes);
        }

        // Die zufälligen Bytes anzeigen
        Console.WriteLine(BitConverter.ToString(randomBytes));
    }
}