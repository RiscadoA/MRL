#include <mrl/render_device.h>
#include <mgl/error.h>

MRL_API mrl_error_t mrl_create_vertex_buffer(mrl_render_device_t * rd, mrl_vertex_buffer_t ** vb, mrl_vertex_buffer_desc_t * desc)
{
	MGL_DEBUG_ASSERT(rd != NULL && vb != NULL && desc != NULL);
	return rd->create_vertex_buffer(rd, vb, desc);
}

MRL_API void mrl_destroy_vertex_buffer(mrl_render_device_t * rd, mrl_vertex_buffer_t * vb)
{
	MGL_DEBUG_ASSERT(rd != NULL && vb != NULL);
	rd->destroy_vertex_buffer(rd, vb);
}

MRL_API mrl_error_t mrl_create_vertex_array(mrl_render_device_t * rd, mrl_vertex_array_t ** va, mrl_vertex_array_desc_t * desc)
{
	MGL_DEBUG_ASSERT(rd != NULL && va != NULL && desc != NULL);
	return rd->create_vertex_array(rd, va, desc);
}

MRL_API void mrl_destroy_vertex_array(mrl_render_device_t * rd, mrl_vertex_array_t * va)
{
	MGL_DEBUG_ASSERT(rd != NULL && va != NULL);
	rd->destroy_vertex_array(rd, va);
}

MRL_API void mrl_set_vertex_array(mrl_render_device_t * rd, mrl_vertex_array_t * va)
{
	MGL_DEBUG_ASSERT(rd != NULL && va != NULL);
	rd->set_vertex_array(rd, va);
}

MRL_API mrl_error_t mrl_create_shader_stage(mrl_render_device_t * rd, mrl_shader_stage_t ** stage, mrl_shader_stage_desc_t * desc)
{
	MGL_DEBUG_ASSERT(rd != NULL && stage != NULL && desc != NULL);
	return rd->create_shader_stage(rd, stage, desc);
}

MRL_API void mrl_destroy_shader_stage(mrl_render_device_t * rd, mrl_shader_stage_t * stage)
{
	MGL_DEBUG_ASSERT(rd != NULL && stage != NULL);
	rd->destroy_shader_stage(rd, stage);
}

MRL_API mrl_error_t mrl_create_shader_pipeline(mrl_render_device_t * rd, mrl_shader_pipeline_t ** pipeline, mrl_shader_pipeline_desc_t * desc)
{
	MGL_DEBUG_ASSERT(rd != NULL && pipeline != NULL && desc != NULL);
	return rd->create_shader_pipeline(rd, pipeline, desc);
}

MRL_API void mrl_destroy_shader_pipeline(mrl_render_device_t * rd, mrl_shader_pipeline_t * pipeline)
{
	MGL_DEBUG_ASSERT(rd != NULL && pipeline != NULL);
	rd->destroy_shader_pipeline(rd, pipeline);
}

MRL_API void mrl_set_shader_pipeline(mrl_render_device_t * rd, mrl_shader_pipeline_t * pipeline)
{
	MGL_DEBUG_ASSERT(rd != NULL && pipeline != NULL);
	rd->set_shader_pipeline(rd, pipeline);
}

MRL_API void mrl_clear_color(mrl_render_device_t * rd, mgl_f32_t r, mgl_f32_t g, mgl_f32_t b, mgl_f32_t a)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->clear_color(rd, r, g, b, a);
}

MRL_API void mrl_clear_depth(mrl_render_device_t * rd, mgl_f32_t depth)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->clear_depth(rd, depth);
}

MRL_API void mrl_clear_stencil(mrl_render_device_t * rd, mgl_i32_t stencil)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->clear_stencil(rd, stencil);
}

MRL_API void mrl_swap_buffers(mrl_render_device_t * rd)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->swap_buffers(rd);
}

MRL_API void mrl_draw_triangles(mrl_render_device_t * rd, mgl_u64_t offset, mgl_u64_t count)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->draw_triangles(rd, offset, count);
}

MRL_API void mrl_draw_triangles_indexed(mrl_render_device_t * rd, mgl_u64_t offset, mgl_u64_t count)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	rd->draw_triangles_indexed(rd, offset, count);
}

MRL_API const mgl_chr8_t * mrl_get_type_name(mrl_render_device_t * rd)
{
	MGL_DEBUG_ASSERT(rd != NULL);
	return rd->get_type_name(rd);
}