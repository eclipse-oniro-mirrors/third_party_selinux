1. ͬ�� OpenHarmony ����

https://gitee.com/openharmony/docs/blob/master/zh-cn/device-dev/quick-start/quickstart-standard-package-environment.md


2. ���ر��ֿ�

https://gitee.com/openharmony-sig/third_party_selinux.git -> third_party/selinux


3. ͬ�������ֿ�

productdefine/common/     <- https://gitee.com/hu-huifeng/productdefine_common.git
third_party/toybox/       <- https://gitee.com/hu-huifeng/third_party_toybox.git
base/security/permission/ <- https://gitee.com/hu-huifeng/security_permission.git


3. ���� SELinux

./build.sh --product-name Hi3516DV300 --build-target selinux
./third_party/selinux/demo/build_policy.sh

���������ļ���ͬһ���ļ��У�

1) ./out/ohos-arm-release/security/selinux/*
2) ./third_party/selinux/demo/config
3) ./third_party/selinux/demo/precompiled_sepolicy
4) ./third_party/selinux/demo/file_contexts
5) ./third_party/selinux/demo/rmabcd.sh
6) ./third_party/selinux/demo/push*.sh
7) ./developtools/hdc_standard/prebuilt/windows/hdc_std.exe
8) ./third_party/selinux/demo/rmabcd.sh


4. ���� Toybox

./build.sh --product-name Hi3516DV300 --build-target toybox

���������ļ���ͬһ���ļ��У��� SELinux ������������ļ�����ͬ����

1) ./out/ohos-arm-release/startup/init/toybox


5. �Ƶ�����

˫���򿪸ղſ����ļ���Ŀ���ļ��У�

1) ˫�� push.bat �� SELinux �Ƶ�����
2) ˫�� push_toybox.bat �� Toybox �Ƶ�����
3) ˫�� push_demo.bat �Ѳ��Գ��� demoloop �Ƶ�����


6. ������֤

���ر�ǩ��

1) load_policy      -> �����Ƿ�ɹ�
2) restorecon -R /  -> ���Ƿ�ɹ�
3) ls -lZ /         -> ����ǩ�Ƿ�ɹ�
4) ps -eZ           -> ����ǩ�Ƿ�ɹ�

���ԣ����ܻ����Ŵ����ύ����޷�ͨ������

���������� demoloop ���Ȼ��˫�� push_demo_abcd.bat��Ȼ�󿴴����Ƿ��� avc denied, avc grant ��־��

