# Stormland — Traduction française V1.1 — Installateur portable (révision 1.1.2)


## Principe

- Un seul EXE portable pour l'utilisateur.
- Aucun setup de l'installateur dans Windows.
- Le skin est exactement `Stormland_install.png` fourni par l'auteur.
- Aucun cadre graphique de survol/sélection ajouté aux boutons.
- Le chemin du jeu est autodétecté lorsqu'il est connu ; `Parcourir...` permet de sélectionner un autre dossier.
- Le payload est intégré directement dans l'EXE final.
- Application transactionnelle avec rollback avant remplacement des fichiers.
- Aucun `Stormland.exe` ni sauvegarde de partie n'est modifié.

## Actions

- **Installer la traduction** : active le français V1.1 tout en conservant le placement actuel des sous-titres.
- **Désinstaller la traduction** : retire le français tout en conservant le placement actuel.
- **Original par défaut** : rétablit le module de texte à droite, comme le jeu d'origine.
- **Custom : de face** : active le placement Stormland FR validé, en face du joueur.
- **À propos** : fenêtre intégrée au thème du skin.

## Base technique

Le contenu français correspond au runtime historiquement validé V0.0.84 / corpus V0.0.83. Le placement Custom correspond au HUD V0.0.81 historiquement validé. Ces numéros ne sont plus exposés comme versions publiques : la distribution utilisateur est **V1.1**.


## Correctifs conservés de 1.1.1

- Corrige la fermeture brutale observée au lancement de toute opération.
- Cause : dépassement de la pile du thread de travail par des buffers de chemins surdimensionnés.
- Les buffers de chemins sont réduits à une taille sûre et la pile de réserve est portée à 4 Mio en garde supplémentaire.
- Ajoute un diagnostic minimal dans `%TEMP%\Stormland_FR_V1.1.2_last_action.log`.
- Le skin et les huit fichiers payload sont inchangés.


## Révision 1.1.2

- Après application de **Original par défaut** ou **Custom : de face**, la fenêtre de confirmation affiche désormais **« Installé avec succès »** en vert, gras et légèrement plus grand sous le texte de placement.
- Aucun changement du skin, du runtime, du corpus ou des huit payloads.
