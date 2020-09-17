#include "io_github_vmoglan_pcljava_Normal.h"
#include "SharedPointerWrapper.h"

#include <pcl/point_types.h>

void Java_io_github_vmoglan_pcljava_Normal_alloc(JNIEnv *env, jobject obj)
{
	pcl::Normal *normal_ptr = new pcl::Normal();

	setHandle(env, obj, normal_ptr);
}

void Java_io_github_vmoglan_pcljava_Normal_dispose(JNIEnv *env, jobject obj)
{
	pcl::Normal *normal_ptr = getHandle<pcl::Normal>(env, obj);

	delete normal_ptr;

	setHandle<pcl::Normal>(env, obj, nullptr);
}

jfloat Java_io_github_vmoglan_pcljava_Normal_getX(JNIEnv *env, jobject obj)
{
	return getHandle<pcl::Normal>(env, obj)->normal_x;
}

void Java_io_github_vmoglan_pcljava_Normal_setX(JNIEnv *env, jobject obj, jfloat x)
{
	getHandle<pcl::Normal>(env, obj)->normal_x = x;
}

jfloat Java_io_github_vmoglan_pcljava_Normal_getY(JNIEnv *env, jobject obj)
{
	return getHandle<pcl::Normal>(env, obj)->normal_y;
}

void Java_io_github_vmoglan_pcljava_Normal_setY(JNIEnv *env, jobject obj, jfloat y)
{
	getHandle<pcl::Normal>(env, obj)->normal_y = y;
}

jfloat Java_io_github_vmoglan_pcljava_Normal_getZ(JNIEnv *env, jobject obj)
{
	return getHandle<pcl::Normal>(env, obj)->normal_z;
}

void Java_io_github_vmoglan_pcljava_Normal_setZ(JNIEnv *env, jobject obj, jfloat z)
{
	getHandle<pcl::Normal>(env, obj)->normal_z = z;
}

jfloat Java_io_github_vmoglan_pcljava_Normal_getCurvature(JNIEnv *env, jobject obj)
{
	return getHandle<pcl::Normal>(env, obj)->curvature;
}