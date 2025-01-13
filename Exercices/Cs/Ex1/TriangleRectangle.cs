using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex1
{
    /// <summary>
    /// Classe représentant un triangle rectangle en tant que forme géométrique.
    /// Hérite de la classe abstraite FormesGeometriques et fournit
    /// des implémentations spécifiques pour calculer la surface et le périmètre.
    /// </summary>
    public class TriangleRectangle : FormesGeometriques
    {
        /// <summary>
        /// Calcule la surface du triangle rectangle en fonction de sa base et de sa hauteur.
        /// Implémente la méthode abstraite de la classe FormesGeometriques.
        /// </summary>
        /// <param name="baseTriangle">La base du triangle rectangle.</param>
        /// <param name="hauteur">La hauteur du triangle rectangle.</param>
        /// <returns>La surface calculée du triangle rectangle.</returns>
        public override double CalculerSurface(double baseTriangle, double hauteur)
        {
            // La formule de la surface d'un triangle rectangle est : (base * hauteur) / 2
            Surface = (baseTriangle * hauteur) / 2;

            // Retourne la valeur calculée de la surface
            return Surface;
        }

        /// <summary>
        /// Calcule le périmètre du triangle rectangle en fonction de sa base et de sa hauteur.
        /// Implémente la méthode abstraite de la classe FormesGeometriques.
        /// </summary>
        /// <param name="baseTriangle">La base du triangle rectangle.</param>
        /// <param name="hauteur">La hauteur du triangle rectangle.</param>
        /// <returns>Le périmètre calculé du triangle rectangle.</returns>
        public override double CalculerPerimetre(double baseTriangle, double hauteur)
        {
            // Étape 1 : Calculer l'hypoténuse à l'aide du théorème de Pythagore
            double hypotenuse = Math.Sqrt(baseTriangle * baseTriangle + hauteur * hauteur);

            // Étape 2 : Calculer le périmètre en additionnant les trois côtés
            Perimetre = baseTriangle + hauteur + hypotenuse;

            // Retourne la valeur calculée du périmètre
            return Perimetre;
        }
    }
}
