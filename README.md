📚 Projet C – Système de gestion de bibliothèque

Ce projet développé en langage C permet de gérer la bibliothèque de l'Ecole Nationale des sciences Appliquées de Safi (ENSAS). Il prend en charge l'inscription et la gestion des utilisateurs (étudiants, enseignants, vacataires, fonctionnaires et le responsable de bibliothèque), la consultation et l’emprunt des livres par catégorie, ainsi que l’administration de la base de livres.

## 👤 Types d'utilisateurs

- Étudiant(e)
- Enseignant(e)
- Vacataire
- Fonctionnaire de l’établissement
- Responsable de la bibliothèque

## 🔧 Fonctionnalités principales

### ✅ Pour tous les utilisateurs :
- Inscription (si non inscrit)
- Choix d’une **catégorie de livres**
- Affichage des livres disponibles dans cette catégorie
- Emprunt d’un livre via *code de livre*
  - Si le livre est déjà emprunté, un message est affiché
  - Sinon, génération d’un *ticket* contenant :
    - Prénom, nom de l’utilisateur
    - Code du livre
    - Date de pret
    - Date de dépôt
  - Ce ticket est remis au responsable pour valider l’emprunt

### 🛠️ Pour le responsable de la bibliothèque :
- Ajouter un nouveau livre
- Supprimer un livre
- Modifier un livre existant
- Voir la liste des livres empruntés

## 📁 Structure du projet
Projet-C/
├── main.c → Code source principal
├── mini projet nv.cbp → Fichier projet pour Code::Blocks
├── alg.math.txt → Livres de mathématiques (l'algèbre)
├── analyse.math.txt → Livres de mathématiques (l'analyse)
├── automatique.txt → Livres de l'automatique
├── ... → (autres catégories présentes)
