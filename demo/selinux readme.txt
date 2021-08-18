
1. 下载third_party_selinux到third_party/selinux目录，third_party/selinux下直接是文件，不需要再有一个目录

2. 下载security_permission,third_party_toybox,productdefin_common的pr
https://gitee.com/hu-huifeng/
把这几个仓的修改何如到L2 Openharmony本地的仓

3. 编译selinux
./build.sh --product-name Hi3516DV300 --build-target selinux
把编译后的文件out/ohos-arm-release/security/selinux/，复制到本地电脑，然后执行push.bat

4. 编译toybox
./build.sh --product-name Hi3516DV300 --build-target toybox
把编译后的文件out/ohos-arm-release/startup/init/toybox，执行push_toybox.bat推到单板

5. 运行验证
load_policy  加载是否成功
restorecon -R /  看是否成功
ls -lZ data 看标签是否成功
demoloop运行，然后执行push_demo_abcd.bat，然后看串口是否有avc denied, avc grant日志

