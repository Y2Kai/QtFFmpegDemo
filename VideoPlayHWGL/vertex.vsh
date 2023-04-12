#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec2 aTexCord;
layout (location = 2) in vec3 aColor;
out vec2 TexCord;    // 纹理坐标
out vec3 VertexColor;//顶点颜色
void main()
{
    gl_Position =  vec4(aPos.x, -aPos.y, aPos.z, 1.0);   // 图像坐标和OpenGL坐标Y轴相反，
    TexCord = aTexCord;
    VertexColor = aColor;
}
