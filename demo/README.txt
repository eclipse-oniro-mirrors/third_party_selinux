1. ͬ�� OpenHarmony ����

https://gitee.com/openharmony/docs/blob/master/zh-cn/device-dev/quick-start/quickstart-standard-package-environment.md

���ղ���ͬ������ L2 ���롣


2. ���ر��ֿ�

https://gitee.com/openharmony-sig/third_party_selinux.git -> third_party/selinux/


3. ͬ�������ֿ�

productdefine/common/     <- https://gitee.com/hu-huifeng/productdefine_common.git
third_party/toybox/       <- https://gitee.com/hu-huifeng/third_party_toybox.git
base/security/permission/ <- https://gitee.com/hu-huifeng/security_permission.git
base/startup/init_lite/   <- https://gitee.com/shell_way/startup_init_lite.git


4. ���б���

./build/prebuilts_download.sh
./build.sh --product-name Hi3516DV300


5. ������֤

3) ls -lZ /         # ����ǩ�Ƿ�ɹ�
4) ps -eZ           # ����ǩ�Ƿ�ɹ�
5) setenforce 1     # ���и��ֲ������۲��Ƿ����أ��Լ������Ƿ��� avc denied

demoloop ������ʱ����֤��

