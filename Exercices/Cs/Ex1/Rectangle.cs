using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex1
{
    /// <summary>
    /// Classe représentant un rectangle en tant que forme géométrique.
    /// Hérite de la classe abstraite FormesGeometriques et fournit
    /// des implémentations spécifiques pour calculer la surface et le périmètre.
    /// </summary>
    public class Rectangle : FormesGeometriques
    {
        /// <summary>
        /// Calcule la surface du rectangle en fonction de sa largeur et de sa hauteur.
        /// Implémente la méthode abstraite de la classe FormesGeometriques.
        /// </summary>
        /// <param name="largeur">La largeur du rectangle.</param>
        /// <param name="hauteur">La hauteur du rectangle.</param>
        /// <returns>La surface calculée du rectangle.</returns>
        public override double CalculerSurface(double largeur, double hauteur)
        {
            // La formule de la surface d'un rectangle est : largeur * hauteur
            Surface = largeur * hauteur;

            // Retourne la valeur calculée de la surface
            return Surface;
        }

        /// <summary>
        /// Calcule le périmètre du rectangle en fonction de sa largeur et de sa hauteur.
        /// Implémente la méthode abstraite de la classe FormesGeometriques.
        /// </summary>
        /// <param name="largeur">La largeur du rectangle.</param>
        /// <param name="hauteur">La hauteur du rectangle.</param>
        /// <returns>Le périmètre calculé du rectangle.</returns>
        public override double CalculerPerimetre(double largeur, double hauteur)
        {
            // La formule du périmètre d'un rectangle est : 2 * (largeur + hauteur)
            Perimetre = 2 * (largeur + hauteur);

            // Retourne la valeur calculée du périmètre
            return Perimetre;
        }
    }
}

