// Copyright (C) 2017 Elviss Strazdins
// This file is part of the Ouzel engine.

#pragma once

namespace ouzel
{
    namespace network
    {
        class Client
        {
        public:
            ~Client() {}

            bool disconnect();
        };
    } // namespace network
} // namespace ouzel
