using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace demoSLO1
{
    class Program
    {
        //-- attributs
        private byte bouteillePotion; 

        //-- méthode 

        //-- "fonction"  
        static void Main(string[] args)
        {
            //-- type primitif --//
            //-- entier --//
            bool valB = true;       // ATTTENTION -> uniquement notion true ou false !!!
                                    // taille -> normalement un octet 
            byte valB1 = 10;        // valeur non signé 
            sbyte valB2 = -10;      // valeur signée
                                    // taille -> 1 octet 

            char valC = 'a';        // ATTENTION -> uniquement pour de caractère 
            valC = '\u0061';        // taille -> 2 octets 
            valC = (char)61; 

            short valS = -1000;     // ATTENTION -> uniquement pour de nombre entier (2^16) 
            ushort valS2 = 1000;    // type non signé 
                                    // taille -> 2 octets


            int valD = -100000;     // type signé       
            uint valD1 = 100000;    // type non signé 
                                    // taille -> 4 octets (2^32) 

            long valL = -100000L;       // Type signé 
            ulong valL2 = 1000000L;    // type non signé 
                                        // taille -> 8 octets (2^64) 
            //-- réel --// 
            float valF = 3.14F;         // WARNING -> f ou F après la cst numérique
                                        // taille -> 4 octets         
            double valDo = 3.14;        // taille -> 8 octets 
            decimal valDe = 3.14m;      // WARNING -> m après la cst numérique
                                        // taille -> 16 octets 

            //-- énumération --// 
            e_typeArme typeArme;                        // déclaration sans instanciation 
            e_typeArme typeA = e_typeArme.aBlanche;     // déclaration avec instanciation  

            //-- objet --// 
            String valSs;           // pour une chaine de caractère      

            personnage etudiant;            // objet déclarer sans instanciation; 
            etudiant = new personnage();    // instanciation avec constructueur par défaut

            personnage etudiantSLo1 = new personnage(50);   // déclaration & instanciation  
            personnage etudiantSLo2 = new personnage(100);

            //-- Quelques instructions de base --// 
            //-> WARNING : cast implicte ne fonctionne pas partout 
            //-> exmple type short = type char  => NE FONCTIONNE PAS 
            // valS = valC; ? instruction possible ? 
            valS = (short)valC; 

            //-- afficher un message user --// 
            Console.WriteLine("Hello SLO2");

            //-- récuperation chaine de caratère 
            valSs = Console.ReadLine(); //-- lecture d'une chaine de caractère 
            valD = Console.Read();      //-- lecture d'un caractère 

            //-- utilisation de l'objet personnage --//
            etudiant.InfoPersonnage();
            etudiantSLo1.InfoPersonnage();
            etudiantSLo2.InfoPersonnage(); 
            
            etudiantSLo2.choixArme = new couteau("couteau suisse", 5);
            etudiantSLo1.Attaquer(etudiantSLo2);

            //etudiantSLo2.choisirArme(ref exemple);
            //etudiantSLo2.choisirArme2(out exemple2);

        }
    }
}
