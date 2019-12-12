/**
***********************************************
 * @file amIOStream.h
 * @date 2019/10/24
 *
 * @author Andr�s Sumano
 * Contact: andressumano@hotmail.com
 *
 * @brief Encapsulates std iostream in engine types 
 *
 * @note
***********************************************
*/
#pragma once

#include <fstream>
#include <ostream>

namespace amEngineSDK {
  using FStream = std::fstream;
  using COut = std::ostream;
}