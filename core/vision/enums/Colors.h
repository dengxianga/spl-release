#pragma once
#include <common/Enum.h>
#include <yaml-cpp/yaml.h>

/// @addtogroup vision
/// @{

ENUM(Color, 
  c_UNDEFINED,
  c_FIELD_GREEN,
  c_WHITE,
  c_ORANGE,
  c_PINK,
  c_BLUE,
  c_YELLOW,
  c_ROBOT_WHITE
);

#define isInFlags(c,flags) (flags & (1 << c))
std::ostream& operator<<(std::ostream& os, Color color);
YAML::Emitter& operator<<(YAML::Emitter& os, Color color);
void operator>>(const YAML::Node& node, Color& color);

/// @}
