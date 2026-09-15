# Validation — Stormland FR V1.1 — installateur 1.1.2

## Modification

- Version publique de la traduction : **V1.1** (inchangée).
- Révision technique de l’installateur : **1.1.2**.
- Après réussite de **Original par défaut** ou **Custom : de face**, la fenêtre d’information conserve la ligne de placement et affiche juste dessous : **Installé avec succès**.
- Cette ligne est rendue en vert, en gras, et à une taille légèrement supérieure au texte d’information.

## Anti-régression

- Skin `Stormland_install.png` : byte-identique à 1.1.1.
- Skin BGRA embarqué : byte-identique à 1.1.1.
- 8 payloads de jeu : byte-identiques à 1.1.1.
- Correctif de pile 1.1.1 conservé : PATH_CAP 2048 et pile réservée 4 Mio.
- Aucun cadre de sélection/survol ajouté.
- Version publique affichée : V1.1.

## Build

- Compilation Windows x64 avec `/W4 /WX` : OK.
- Vérification payload embarqué : 8/8, problèmes 0.
- Deux builds successifs : byte-identiques.
- SHA-256 EXE : `34bd05cd33a87959ebe406bc03bb0b85803bc29967022c259b4be4af6cb48204`.

## Test restant

L’exécution réelle Win32 et le rendu final du message après clic doivent être validés sur un PC Windows avec Stormland.
