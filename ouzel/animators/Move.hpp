// Copyright (C) 2017 Elviss Strazdins
// This file is part of the Ouzel engine.

#pragma once

#include "animators/Animator.hpp"
#include "math/Vector3.hpp"

namespace ouzel
{
    namespace scene
    {
        class Move: public Animator
        {
        public:
            Move(float initLength, const Vector3& initPosition, bool initRelative = false);

            virtual void play() override;

        protected:
            virtual void updateProgress() override;

            Vector3 position;
            Vector3 startPosition;
            Vector3 targetPosition;
            Vector3 diff;
            bool relative;
        };
    } // namespace scene
} // namespace ouzel
