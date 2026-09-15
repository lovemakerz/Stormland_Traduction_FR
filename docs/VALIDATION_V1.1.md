# Validation offline — Stormland FR V1.1 Portable UI

## Skin / interface

- Skin source : `Stormland_install.png` fourni par l'auteur.
- Dimensions : 1200 × 675, RGBA opaque.
- Aucun skin alternatif généré.
- Aucun cadre de survol/sélection dessiné sur les boutons principaux.
- Hotspots définis sur les zones visibles du PNG.
- Fenêtre À propos dessinée par le programme dans une palette métal/vert/ambre cohérente avec le skin.
- Version publique visible dans À propos : V1.1.

## Fonctionnel

- `Installer la traduction` conserve le placement HUD en cours.
- `Désinstaller la traduction` conserve le placement HUD en cours.
- `Original par défaut` = module de texte natif à droite.
- `Custom : de face` = modification HUD validée du projet.
- Détection automatique du dossier Stormland via : dossier de l'EXE, chemin de test historique, bibliothèques Oculus/Meta et dossiers Oculus standards.
- `Parcourir...` sélectionne manuellement le dossier racine.
- État runtime inconnu : modification refusée.
- Application transactionnelle avec fichiers de rollback temporaires.
- Sauvegarde du TOC original avant première modification lorsque le jeu est détecté comme totalement original.
- Aucun `Stormland.exe` ni sauvegarde de partie n'est modifié.

## Payload

- 8 fichiers embarqués dans l'EXE : 4 états `TRADUCTION ON/OFF × HUD ORIGINAL/CUSTOM`.
- Chaque payload est contrôlé par SHA-256 avant application.
- Le couple FR + Custom est byte-identique au runtime V0.0.84 validé par l'utilisateur.
- Le HUD Custom est donc la même base historique V0.0.81 déjà validée.

## Compilation

- Windows x64, sous-système GUI.
- Aucun CRT requis par le binaire principal.
- Compilation `clang-cl /W4 /WX` réussie.
- Link `lld-link /Brepro /timestamp:0`.
- Deux reconstructions successives produisent un EXE byte-identique.
- Overlay payload relu et comparé au manifeste après empaquetage.

## Limite du test offline

L'exécution réelle de l'interface Win32 et les quatre transitions dans Stormland doivent encore être validées sur le PC Windows du testeur. Le binaire n'a pas été exécuté sous Windows dans l'environnement de construction.
