# POBJ - Cours de programmation objet année 2024 - 2025 
## Infos Pratiques sur Git

### Créer un compte sur un serveur GIT 
pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
* => Pour gérer votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** (directory) où vous voulez 
	
	Conseil : placez sur le disque C: et créez-vous un répertoire de travail
	
	```
	// exemple sous windows 
	c:\mesDossierGit_XXX\monDepot_1 
	```
	B. => sur votre serveur Git, créer un **dépôt** (new repository) 
	
	C. => lier les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	```
	C: 
	> cd c:\mesDossierGit_XXX\monDepot_1 
	```

	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche (la "branch" principale est généralement nommée **main** ou **master**)
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	C:
	> c:\mesDossierGit\monDepot 
	```
	
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 	
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un (camarade par exemple) 
	
	A. => depuis le serveur -> "forker" le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork -> entrer les indications necéessaire -> nom de votre futur dépôt
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	C: 
	> mkdir c:\mesDossierGit\monDepot_2 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone https://github.com/nomUserGit/votreNomDepotGit.git
	``` 

*=> Vous pouvez aussi utiliser des clients git Graphique (Source Tree - Github Desktop - TortoiseGit - etc), 
prenez celui-qui vous convient 
	
## Suivi des exercices 
---

| Exercices \ Initial Etudiant | **[NBN](https://github.com/NicolasBessson)** | **[MBR](https://github.com/MathieuBucher)** | **[TCT](https://github.com/Tass1l0)** | **[ACL](https://github.com/Sweedy3960)** | **[EDO](https://github.com/etideoliveira)** | **[NEG](https://github.com/Larssno)** | **[VCO](https://github.com/kediven)** | **[LMS](https://github.com/LeoMendesEsEtml)** | **[MSI](https://github.com/MatteoStefanelli)** | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| UML | | | | | | | | | | 
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex1_UML) | NOK | NOK | OK | OK | OK | NOK | NOK | NOK | OK |
| C++ | | | | | | | | | |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_POO) | NOK | NOK | NOK | NOK | OK | NOK | OK | NOK |  NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex5]() | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex6]() | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex7]() | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex7]() | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex8] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex9] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex10] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| JAVA | | | | | | | | | |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex5 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| C# | | | | | | | | | |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [6] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [7] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [8] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [9] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [10] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## Exercice 1 => **UML**
* donnee : exercice 1 - UML  
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#22](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/22)

## Exercice 2 => **C++** 
* donnee : exercice 1 - C++
* codage "individuel"
* etat d'avancement => voir []()








## Exercice 2 => **C#**
### Suivi Projet  
* donnee : exercice 1 - C++
* codage "individuel"	 
* etat d'avancement => voir []()

## Exercice 3 => **JAVA**
### Suivi Projet  
* donnee : exercice 1 - C++ 
* codage "individuel"
=> etat d'avancement => voir []()

## Exercice 3 => **C++**
### Suivi Projet  
* donnee : exercice 2 - C++
* codage "individuel"
* etat d'avancement => voir []()

## Exercice 3 => **C#**
### Suivi Projet  
* donnee : exercice 2 - C++
* codage "individuel" 
* etat d'avancement => voir []()

## Exercice 4 => **C++**
### Suivi Projet  
* donnee : exercice 4 - C++
* codage "individuel"
* etat d'avancement => voir []()

## Exercice 5 => **C++**
### Suivi Projet  
* donnee : exercice 5 - C++) 
* codage "individuel"
* etat d'avancement => voir []()

## Exercice 6 => **C++**
### Suivi Projet  
* Exercice 5 -> C++ (exercice 6 - C++) 
* codage "individuel"
* etat d'avancement => voir []()

## Exercice 7 => **C++**
### Suivi Projet  
* Exercice 6 -> C++ (exercice 3 - C++) 
* codage "individuel"
* etat d'avancement => voir []()


## Exercice 10 => **C#**
### Suivi Projet  
* Exercice 2 - C++ -> C# (exercice 4 - C++) 
* codage "individuel" 
* etat d'avancement => voir []()

## Exercice 4 => **JAVA**
### Suivi Projet  
* Exercice 1 - C-> Java (exercice 1 - C++) 
* codage "individuel"
=> etat d'avancement => voir []()






