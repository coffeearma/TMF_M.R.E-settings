#include "script_component.hpp"

class CfgPatches {
  class ADDON
  {
    name = "Ace Settings";
    author = "OldGrumple";
    authors[] = {"Loadin", "OldGrumple"};
    authorUrl = "http://coffeearma.com";
    url = "http://coffeearma.com";
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"main", "ace_map", "ace_zeus", "ace_overheating", "ace_advanced_fatigue", "ace_medical"};
    VERSION_CONFIG;
  };
};

#include "ace_settings.hpp"
