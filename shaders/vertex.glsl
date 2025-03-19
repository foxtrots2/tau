#version 330 core
layout (location=0) in vec3 vertexPos; // Vertex position attribute
layout (location=1) in vec2 vertexUV;  // UV attribute

uniform mat4 u_model;       // Model matrix
uniform mat4 u_view;        // View matrix
uniform mat4 u_projection;  // Projection matrix

out vec2 fragUV; // Pass UV coordinates to the fragment shader

void main() {
    fragUV = vertexUV;
    	gl_Position = vec4(vertexPos.xyz, 1.0);
}