using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ex1
{
    /// <summary>
    /// Classe abstraite représentant une forme géométrique.
    /// Cette classe définit des propriétés communes (Surface et Perimetre)
    /// ainsi que des méthodes abstraites pour calculer ces valeurs.
    /// Les classes dérivées doivent implémenter les méthodes abstraites.
    /// </summary>
    public abstract class FormesGeometriques
    {
        /// <summary>
        /// Propriété représentant la surface de la forme géométrique.
        /// Elle est calculée par une classe dérivée et stockée ici.
        /// </summary>
        public double Surface { get; protected set; }

        /// <summary>
        /// Propriété représentant le périmètre de la forme géométrique.
        /// Elle est calculée par une classe dérivée et stockée ici.
        /// </summary>
        public double Perimetre { get; protected set; }

        /// <summary>
        /// Méthode abstraite pour calculer la surface d'une forme géométrique.
        /// Les classes dérivées doivent fournir leur propre implémentation.
        /// </summary>
        /// <param name="x1">Premier paramètre nécessaire pour le calcul (varie selon la forme).</param>
        /// <param name="x2">Deuxième paramètre nécessaire pour le calcul (varie selon la forme).</param>
        /// <returns>La surface calculée de la forme géométrique.</returns>
        public abstract double CalculerSurface(double x1, double x2);

        /// <summary>
        /// Méthode abstraite pour calculer le périmètre d'une forme géométrique.
        /// Les classes dérivées doivent fournir leur propre implémentation.
        /// </summary>
        /// <param name="x1">Premier paramètre nécessaire pour le calcul (varie selon la forme).</param>
        /// <param name="x2">Deuxième paramètre nécessaire pour le calcul (varie selon la forme).</param>
        /// <returns>Le périmètre calculé de la forme géométrique.</returns>
        public abstract double CalculerPerimetre(double x1, double x2);

        /// <summary>
        /// Retourne la surface calculée de la forme géométrique.
        /// </summary>
        /// <returns>La surface précédemment calculée et stockée.</returns>
        public double GetSurface() => Surface;

        /// <summary>
        /// Retourne le périmètre calculé de la forme géométrique.
        /// </summary>
        /// <returns>Le périmètre précédemment calculé et stocké.</returns>
        public double GetPerimetre() => Perimetre;
    }
}

