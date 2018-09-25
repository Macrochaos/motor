/***********************
*  @brief 
***********************/
#pragma once
/***********************
*
*  Includes
*
***********************/
#include "amPrerequisitesUtilities.h"
#include "amVector3.h"
#include "amMath.h"

namespace amEngineSDK {
  class amAABB
  {
  public:
    amAABB();
    ~amAABB();

    /***********************
    *  @brief Copy constructor
    ***********************/
    amAABB
    (const amAABB& other);

    /***********************
    *  @brief Make this box a copy of the given box
    ***********************/
    amAABB& 
    operator=(const amAABB& other);

    amAABB
    operator+(const amAABB& other);
    amAABB
    operator-(const amAABB& other);
    amAABB
    operator*(const amAABB& other);
    amAABB
    operator/(const amAABB& other);

    amAABB&
    operator+=(const amAABB& other);
    amAABB&
    operator-=(const amAABB& other);
    amAABB&
    operator*=(const amAABB& other);
    amAABB&
    operator/=(const amAABB& other);

    

    /***********************
    *  @brief Adds a point/vector to the box volume
    ***********************/
    void
    add(const amVector3& vec);


    /******************************************
    *
    * @brief Checks for intersects with another AABB
    *
    * @param the other AABB
    *
    * @returns true if is intersecting with the other AABB
    *
    ******************************************/
    bool
    intersects(const amAABB& other);

    /******************************************
    *
    * @brief Checks for intersects with a vector
    *
    * @param the vector
    *
    * @returns true if is intersecting with the vector
    *
    ******************************************/
    bool
    intersects(const amVector3& vec) const;


    /***********************
    *  @brief 
    ***********************/
    amAABB
    setToTransformedBox();

    amVector3 m_pMin;
    amVector3 m_pMax;
  };
}


