////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2021 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#pragma once

namespace Reaper
{
struct ReaperRoot;
struct VulkanBackend;
struct IWindow;

REAPER_RENDERER_API void renderer_start(ReaperRoot& root, VulkanBackend& backend, IWindow* window);
REAPER_RENDERER_API void renderer_stop(ReaperRoot& root, VulkanBackend& backend, IWindow* window);

struct SceneGraph;

REAPER_RENDERER_API void renderer_execute_frame(ReaperRoot& root, const SceneGraph& scene, u32 frameIndex);
} // namespace Reaper
