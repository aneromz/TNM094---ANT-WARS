#ifndef __ARUCO_UNITY_PLUGIN_POINT2F_HPP__
#define __ARUCO_UNITY_PLUGIN_POINT2F_HPP__

#include <opencv2/core.hpp>
#include "aruco_unity_plugin/utility/exports.hpp"

//! @addtogroup scalar
//! \brief Template class for a 4-element vector derived from Vec.
//!
//! See the OpenCV documentation for more information: http://docs.opencv.org/3.2.0/d1/da0/classcv_1_1Scalar__.html
//! @{

extern "C" {
  //! \name Constructors & Destructors
  //! @{

  //! \brief Creates a Scalar.
  ARUCO_UNITY_API cv::Scalar* au_cv_Scalar_new(double v0, double v1, double v2);

  //! \brief Deletes any Scalar.
  //! \param scalar The Scalar used.
  ARUCO_UNITY_API void au_cv_Scalar_delete(cv::Scalar* scalar);

  //! @} Constructors & Destructors
}

//! @} scalar

#endif