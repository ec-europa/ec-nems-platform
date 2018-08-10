#!/bin/bash

MAKE=../../../resources/site.make

# If the package is present update the lib source code.
if [ -d "vendor/ec-europa/ec-nems-platform" ] ; then

  # Remove nems related sources if any.
  rm -rf modules/features/nems
  #rm -rf modules/custom/nems
  #rm -rf themes/nems

  # Create clean folders
  mkdir -p modules/features/nems
  #mkdir -p modules/custom/nems
  #mkdir -p themes/nems

  # Create clean folders
  mkdir ../../../resources/patches

  # Copy the sources in place.
  cp -r vendor/ec-europa/ec-nems-platform/lib/features/* modules/features/nems
  #cp -r vendor/ec-europa/ec-nems-platform/lib/modules/* modules/custom/nems
  #cp -r vendor/ec-europa/ec-nems-platform/lib/themes/* themes/nems
  cp -r vendor/ec-europa/ec-nems-platform/resources/patches/* ../../../resources/patches
  cp -f vendor/ec-europa/ec-nems-platform/resources/nems-platform.make ../../../resources/nems-platform.make

  # Create the patches folder.
  mkdir -p ../../../resources/patches
  cp -f vendor/ec-europa/ec-nems-platform/resources/patches/* ../../../resources/patches

  # Include the nems-platform.make file.
  if ! [ -e $MAKE ] 2> /dev/null && [ -e $MAKE".example" ] ; then
    mv $MAKE".example" $MAKE;
  fi
  if [ -e $MAKE ] ; then
    COMMENT="\n\n; ================="
    COMMENT="$COMMENT\n; Platform for nems"
    COMMENT="$COMMENT\n; =================\n"
    INCLUDE='includes[] = "nems-platform.make"'
    grep -qF "$INCLUDE" "$MAKE" || echo -e "$COMMENT$INCLUDE" >> "$MAKE"
  else
    echo "No $MAKE file found, nems-platform.make not included!"
  fi
fi

