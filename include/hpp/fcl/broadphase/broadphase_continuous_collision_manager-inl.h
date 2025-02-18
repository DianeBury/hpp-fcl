/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2011-2014, Willow Garage, Inc.
 *  Copyright (c) 2014-2016, Open Source Robotics Foundation
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Open Source Robotics Foundation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/** @author Jia Pan */

#ifndef HPP_FCL_BROADPHASE_BROADPHASECONTINUOUSCOLLISIONMANAGER_INL_H
#define HPP_FCL_BROADPHASE_BROADPHASECONTINUOUSCOLLISIONMANAGER_INL_H

#include "hpp/fcl/broadphase/broadphase_continuous_collision_manager.h"
#include <algorithm>

namespace hpp {
namespace fcl {

//==============================================================================
BroadPhaseContinuousCollisionManager::BroadPhaseContinuousCollisionManager()
{
  // Do nothing
}

//==============================================================================


BroadPhaseContinuousCollisionManager::~BroadPhaseContinuousCollisionManager()
{
  // Do nothing
}

//==============================================================================


void BroadPhaseContinuousCollisionManager::registerObjects(
    const std::vector<ContinuousCollisionObject*>& other_objs)
{
  for(size_t i = 0; i < other_objs.size(); ++i)
    registerObject(other_objs[i]);
}

//==============================================================================


void BroadPhaseContinuousCollisionManager::update(
    ContinuousCollisionObject* updated_obj)
{
  HPP_FCL_UNUSED_VARIABLE(updated_obj);

  update();
}

//==============================================================================


void BroadPhaseContinuousCollisionManager::update(
    const std::vector<ContinuousCollisionObject*>& updated_objs)
{
  HPP_FCL_UNUSED_VARIABLE(updated_objs);

  update();
}

} // namespace fcl

} // namespace hpp

#endif
