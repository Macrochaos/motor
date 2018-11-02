/**
***********************************************
 * @file amRNG.h
 * @date 2018/10/17
 *
 * @author Andr�s Sumano
 * Contact: andressumano@hotmail.com
 *
 * @brief Implements a Random Number Generator 
 *
 * @note
***********************************************
*/
namespace amEngineSDK {
  class amRNG
  {
  public:
    amRNG() = default;
    ~amRNG() = default;

    float 
    ziggurat();

    void 
    boxMuller(float u, float v);


  };
}
