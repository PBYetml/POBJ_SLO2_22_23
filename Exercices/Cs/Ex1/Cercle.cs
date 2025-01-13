using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex1
{
    /// <summary>
    /// Classe représentant un cercle en tant que forme géométrique.
    /// Hérite de la classe de base abstraite FormesGeometriques
    /// et fournit une implémentation spécifique pour le calcul
    /// de la surface et du périmètre d'un cercle.
    /// </summary>
    public class Cercle : FormesGeometriques
    {
        /// <summary>
        /// Calcule la surface d'un cercle.
        /// </summary>
        /// <param name="diametre">Le diamètre du cercle (paramètre principal).</param>
        /// <param name="unused">
        /// Ce paramètre est ignoré ici car non pertinent pour un cercle.
        /// Il est inclus pour respecter la signature abstraite définie dans FormesGeometriques.
        /// </param>
        /// <returns>La surface calculée du cercle.</returns>
        public override double CalculerSurface(double diametre, double unused = 0)
        {
            // Étape 1 : Calculer le rayon en divisant le diamètre par 2
            double rayon = diametre / 2;

            // Étape 2 : Appliquer la formule de la surface d'un cercle : π * rayon^2
            Surface = Math.PI * rayon * rayon;

            // Étape 3 : Retourner la surface calculée
            return Surface;
        }

        /// <summary>
        /// Calcule le périmètre d'un cercle.
        /// </summary>
        /// <param name="diametre">Le diamètre du cercle (paramètre principal).</param>
        /// <param name="unused">
        /// Ce paramètre est ignoré ici car non pertinent pour un cercle.
        /// Il est inclus pour respecter la signature abstraite définie dans FormesGeometriques.
        /// </param>
        /// <returns>Le périmètre calculé du cercle.</returns>
        public override double CalculerPerimetre(double diametre, double unused = 0)
        {
            // Étape 1 : Appliquer la formule du périmètre d'un cercle : π * diamètre
            Perimetre = Math.PI * diametre;

            // Étape 2 : Retourner le périmètre calculé
            return Perimetre;
        }
    }
}



