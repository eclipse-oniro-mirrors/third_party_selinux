
1. ����third_party_selinux��third_party/selinuxĿ¼��third_party/selinux��ֱ�����ļ�������Ҫ����һ��Ŀ¼

2. ����security_permission,third_party_toybox,productdefin_common��pr
https://gitee.com/hu-huifeng/
���⼸���ֵ��޸ĺ��絽L2 Openharmony���صĲ�

3. ����selinux
./build.sh --product-name Hi3516DV300 --build-target selinux
�ѱ������ļ�out/ohos-arm-release/security/selinux/�����Ƶ����ص��ԣ�Ȼ��ִ��push.bat

4. ����toybox
./build.sh --product-name Hi3516DV300 --build-target toybox
�ѱ������ļ�out/ohos-arm-release/startup/init/toybox��ִ��push_toybox.bat�Ƶ�����

5. ������֤
load_policy  �����Ƿ�ɹ�
restorecon -R /  ���Ƿ�ɹ�
ls -lZ data ����ǩ�Ƿ�ɹ�
demoloop���У�Ȼ��ִ��push_demo_abcd.bat��Ȼ�󿴴����Ƿ���avc denied, avc grant��־

