#!/bin/bash
echo "1"
if [ $1 ];
then
	ROOT_DIR=$1
	echo "2"
else
	ROOT_DIR=../../
	echo "3"
fi
${ROOT_DIR}/out/ohos-arm-release/clang_x64/security/selinux/checkpolicy -M -C -c 30 -o ${ROOT_DIR}/third_party/selinux/demo/test.cil ${ROOT_DIR}/third_party/selinux/demo/sepolicy.default.3516.conf 
${ROOT_DIR}/out/ohos-arm-release/clang_x64/security/selinux/secilc -m -M true -G -c 30 -N ${ROOT_DIR}/third_party/selinux/demo/test.cil -o ${ROOT_DIR}/third_party/selinux/demo/precompiled_sepolicy -f /dev/null

