# Validation — Stormland FR V1.1 — installateur révision 1.1.1

## Incident corrigé

La révision initiale V1.1 se fermait brutalement au démarrage des opérations Installer / Désinstaller / Original / Custom.

Cause confirmée par l'analyse de consommation de pile du compilateur :

- `apply_payload` : ~524600 octets de pile dans le binaire fautif ;
- `restore_exact_original` : ~459016 octets ;
- `DetectState` : ~393464 octets ;
- `ensure_backup_from_original` : ~458840 octets ;
- pile réservée du thread : 1 MiB.

Ces fonctions s'appelaient de manière imbriquée et dépassaient donc la pile du thread de travail.

## Correctif

- `PATH_CAP` réduit de 32768 à 2048 caractères UTF-16 ;
- plus gros frame mesuré après correction : `apply_payload` ~33080 octets ;
- pile réservée du binaire portée à 4 MiB, commit initial 64 KiB ;
- journal minimal ajouté : `%TEMP%\Stormland_FR_V1.1.1_last_action.log` ;
- logique transactionnelle et rollback conservés.

## Anti-régression

- image utilisateur `Stormland_install.png` : byte-identique à la V1.1 initiale ;
- skin BGRA embarqué : byte-identique ;
- 8 fichiers payload : byte-identiques ;
- vérification de l'overlay embarqué : 8/8 conformes ;
- compilation avec warnings traités en erreurs ;
- deux compilations successives reproductibles : SHA-256 identique.

## Binaire

SHA-256 : `e6b793950806a805c2ee3c20e5d0bbacd289fb892a9d654b7c880c8b767cdb66`

## Limite de validation

Le binaire Windows x64 a été compilé, inspecté et validé statiquement dans l'environnement de build. L'exécution réelle des quatre actions dans Stormland doit être confirmée sur Windows par l'utilisateur.
