using System;

namespace Ex1
{
    /// <summary>
    /// Point d'entrée principal du programme.
    /// Permet à l'utilisateur de choisir une forme géométrique, de saisir ses dimensions,
    /// et d'afficher les calculs de surface et de périmètre correspondants.
    /// </summary>
    public class Program
    {
        /// <summary>
        /// Méthode principale qui est appelée au démarrage du programme.
        /// </summary>
        /// <param name="args">Tableau d'arguments passés en ligne de commande (non utilisé ici).</param>
        public static void Main(string[] args)
        {
            // Affiche le menu des options disponibles pour l'utilisateur.
            Console.WriteLine("Choisissez une forme géométrique :");
            Console.WriteLine("1. Rectangle");
            Console.WriteLine("2. Cercle");
            Console.WriteLine("3. Triangle Rectangle");

            // Lit le choix de l'utilisateur et le convertit en entier.
            int choix = int.Parse(Console.ReadLine());

            // Utilisation d'un switch pour exécuter le code correspondant au choix de l'utilisateur.
            switch (choix)
            {
                case 1:
                    // Cas où l'utilisateur choisit un rectangle.
                    Rectangle rectangle = new Rectangle();

                    // Demande à l'utilisateur de saisir les dimensions du rectangle.
                    Console.Write("Entrez la largeur : ");
                    double largeur = double.Parse(Console.ReadLine());
                    Console.Write("Entrez la hauteur : ");
                    double hauteur = double.Parse(Console.ReadLine());

                    // Calcule la surface et le périmètre du rectangle.
                    rectangle.CalculerSurface(largeur, hauteur);
                    rectangle.CalculerPerimetre(largeur, hauteur);

                    // Affiche les résultats.
                    Console.WriteLine($"Surface : {rectangle.GetSurface()}, Périmètre : {rectangle.GetPerimetre()}");
                    break;

                case 2:
                    // Cas où l'utilisateur choisit un cercle.
                    Cercle cercle = new Cercle();

                    // Demande à l'utilisateur de saisir le diamètre du cercle.
                    Console.Write("Entrez le diamètre : ");
                    double diametre = double.Parse(Console.ReadLine());

                    // Calcule la surface et le périmètre du cercle.
                    cercle.CalculerSurface(diametre);
                    cercle.CalculerPerimetre(diametre);

                    // Affiche les résultats.
                    Console.WriteLine($"Surface : {cercle.GetSurface()}, Périmètre : {cercle.GetPerimetre()}");
                    break;

                case 3:
                    // Cas où l'utilisateur choisit un triangle rectangle.
                    TriangleRectangle triangle = new TriangleRectangle();

                    // Demande à l'utilisateur de saisir les dimensions du triangle rectangle.
                    Console.Write("Entrez la base : ");
                    double baseTriangle = double.Parse(Console.ReadLine());
                    Console.Write("Entrez la hauteur : ");
                    double hauteurTriangle = double.Parse(Console.ReadLine());

                    // Calcule la surface et le périmètre du triangle rectangle.
                    triangle.CalculerSurface(baseTriangle, hauteurTriangle);
                    triangle.CalculerPerimetre(baseTriangle, hauteurTriangle);

                    // Affiche les résultats.
                    Console.WriteLine($"Surface : {triangle.GetSurface()}, Périmètre : {triangle.GetPerimetre()}");
                    break;

                default:
                    // Cas où l'utilisateur entre un choix invalide.
                    Console.WriteLine("Choix invalide.");
                    break;
            }
        }
    }
}
