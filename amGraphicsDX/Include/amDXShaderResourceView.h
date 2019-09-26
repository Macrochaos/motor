/**
***********************************************
 * @file amDXShaderResourceView.h
 * @date 2019/06/13
 *
 * @author Andr�s Sumano
 * Contact: andressumano@hotmail.com
 *
 * @brief Implements an resource interface to be bound for use in shaders
 *
***********************************************
*/
#pragma once
#include "amDXPreReqs.h"
#include "amShaderResourceView.h"
/**
************************
* D3D11 Resource* types
* - ID3D11Buffer
* - ID3D11DepthStencilView
* - ID3D11RenderTargetView
* - ID3D11ShaderResourceView
* - ID3D11Texture1D - 3D
* - ID3D11UnorderedAccessView
* - ID3D11View
************************
*/

namespace amEngineSDK {
  class amDXShaderResourceView : public amShaderResourceView
  {
   public:
    amDXShaderResourceView();
    ~amDXShaderResourceView();

    void
    setDesc(const int32 _type,
            const int32 _format);

    virtual void 
    createSRV(amDevice* _device, 
              amTexture* _tex, 
              const int32 _type, 
              const int32 _format);

    ID3D11ShaderResourceView* m_pSRV;
    D3D11_SHADER_RESOURCE_VIEW_DESC m_SRV_Desc;
    amDXSRV_Types::E m_type;
  };
}
