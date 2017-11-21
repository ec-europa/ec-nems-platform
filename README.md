## NEMS Platform Instructions

To incorporate the nems platform into your subsite project you need to add the following to your resources/composer.json file:

```json {
    "require": {
        "ec-europa/ec-nems-platform": "~1.3.0"
    },
    "scripts": {
        "post-install-cmd": "vendor/ec-europa/ec-nems-platform/resources/install-nems-platform.sh",
        "post-update-cmd": "vendor/ec-europa/ec-nems-platform/resources/install-nems-platform.sh"
    }
}
```
