## NEMS Platform Instructions

To incorporate the nems platform into your subsite project with toolkit 
you need to add the following to your resources/composer.json file:

```json 
{
  "require": {
    "ec-europa/ec-nems-platform": "~1.3.0"
  },
  "scripts": {
    "post-install-cmd": "vendor/ec-europa/ec-nems-platform/resources/install-nems-platform.sh",
    "post-update-cmd": "vendor/ec-europa/ec-nems-platform/resources/install-nems-platform.sh"
  }
}
```

# Upgrade notes for starter kit

To upgrade from versions below 1.3.0 you need to update your subsite NEMS integration. Every susbite with NEMS integration prior to version 1.3.0 has in its repository a integration script in resources/composer/scripts/post-install-cmd/install-nems-platform

You need to edit the script for it to integrate the new fe_nodequeue patch like so:

```sh
  # Copy the platform make file.
  cp -f lib/vendor/ec-europa/ec-$TYPE-platform/resources/$TYPE-platform.make resources/$TYPE-platform.make

  # Make patches dir if not present and copy new patches.
  mkdir -p resources/patches
  cp -r lib/vendor/ec-europa/ec-$TYPE-platform/resources/patches/* resources/patches
```
After you can sun ./bin/phing build-dist to check te integration.
