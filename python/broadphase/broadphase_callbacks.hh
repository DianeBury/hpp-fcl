//
// Software License Agreement (BSD License)
//
//  Copyright (c) 2022 NRIA
//  Author: Justin Carpentier
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions
//  are met:
//
//   * Redistributions of source code must retain the above copyright
//     notice, this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above
//     copyright notice, this list of conditions and the following
//     disclaimer in the documentation and/or other materials provided
//     with the distribution.
//   * Neither the name of CNRS-LAAS. nor the names of its
//     contributors may be used to endorse or promote products derived
//     from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
//  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
//  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.

#ifndef HPP_FCL_PYTHON_BROADPHASE_BROADPHASE_CALLBACKS_HH
#define HPP_FCL_PYTHON_BROADPHASE_BROADPHASE_CALLBACKS_HH

#include <eigenpy/eigenpy.hpp>

#include <hpp/fcl/fwd.hh>
#include <hpp/fcl/broadphase/broadphase_callbacks.h>

#include "../fcl.hh"

#ifdef HPP_FCL_HAS_DOXYGEN_AUTODOC
#include "doxygen_autodoc/functions.h"
#include "doxygen_autodoc/hpp/fcl/broadphase/broadphase_callbacks.h"
#endif

namespace hpp { namespace fcl {

struct CollisionCallBackBaseWrapper
: CollisionCallBackBase, bp::wrapper<CollisionCallBackBase>
{
  typedef CollisionCallBackBase Base;
  
  void init() { this->get_override("init")(); }
  bool collide(CollisionObject* o1, CollisionObject* o2) { return this->get_override("collide")(o1,o2); }
  
  static void expose()
  {
    bp::class_<CollisionCallBackBaseWrapper, boost::noncopyable>("CollisionCallBackBase",bp::no_init)
    .def("init",
         bp::pure_virtual(&Base::init),
         doxygen::member_func_doc(&Base::init))
    .def("collide",
         bp::pure_virtual(&Base::collide),
         doxygen::member_func_doc(&Base::collide))
    .def("__call__",
         &Base::operator(),
         doxygen::member_func_doc(&Base::operator()))
    ;
  }
}; // CollisionCallBackBaseWrapper

struct DistanceCallBackBaseWrapper
: DistanceCallBackBase, bp::wrapper<DistanceCallBackBase>
{
  typedef DistanceCallBackBase Base;
  
  void init() { this->get_override("init")(); }
  bool distance(CollisionObject* o1, CollisionObject* o2) { return this->get_override("distance")(o1,o2); }
  
  static void expose()
  {
    bp::class_<DistanceCallBackBaseWrapper, boost::noncopyable>("DistanceCallBackBase",bp::no_init)
    .def("init",
         bp::pure_virtual(&Base::init),
         doxygen::member_func_doc(&Base::init))
    .def("distance",
         bp::pure_virtual(&Base::distance),
         doxygen::member_func_doc(&Base::distance))
    .def("__call__",
         &Base::operator(),
         doxygen::member_func_doc(&Base::operator()))
    ;
  }
}; // DistanceCallBackBaseWrapper

}}

#endif // ifndef HPP_FCL_PYTHON_BROADPHASE_BROADPHASE_CALLBACKS_HH
