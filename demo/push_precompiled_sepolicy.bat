hdc_std.exe shell mkdir /etc/selinux
hdc_std.exe shell mkdir /etc/selinux/targeted
hdc_std.exe shell mkdir /etc/selinux/targeted/policy
hdc_std.exe shell mkdir /etc/selinux/targeted/contexts
hdc_std.exe shell mkdir /etc/selinux/targeted/contexts/files
hdc_std.exe file send precompiled_sepolicy /etc/selinux/targeted/policy/policy.31
hdc_std.exe file send file_contexts /etc/selinux/targeted/contexts/files/file_contexts
pause