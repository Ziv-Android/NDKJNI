# NDKJNI
## 关于NDK开发的JNI的Demo

1 下载并配置NDK，确保*local.properties*中ndk.dir路径正确
  ndk.dir=/usr/lib/android/sdk/ndk-bundle
2 创建Android工程
3 创建类，编写native方法，Build工程
4 进入输出的类文件夹 cd app/build/intermediates/classes/debug
5 根据生成的包含nativa方法的class文件使用javah -jni 完整包名.类名
  ```
  eg： javah -jni com.ziv.ndkjni.NdkJniUtils
```
  生成JNI所需要的.h头文件
6 创建jni目录，并把生成的头文件移动到其中
7 编写c方法的实现，需要注意的是使用include引入生成的头文件
8 在gradle.properties文件中添加android.useDeprecatedNdk=true打开NDK编译开关
9 在app/build.gradle文件中添加
  ```
  android.defaultConfig.ndk{
    moduleName "ZivJniLibraryName"
    abiFilters "armeabi", "armeabi-v7a", "x86"
  }
```
  其中ZivJniLibraryName为即将生成的so库的名称，abiFilters代表使用平台
10 编译运行工程，大功告成
