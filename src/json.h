#pragma once

#include "jwtxx/jwt.h"

namespace JWTXX
{

std::string toJSON(const JWT::Pairs& data);

}