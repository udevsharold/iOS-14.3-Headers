/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DKEnterSandbox : NSObject
+(id)_bundleId;
+(id)_processName;
+(char*)_getHomeDirectory;
+(char*)_getTempDirectory;
+(char*)_getCacheDirectory;
+(char*)_getMainBundle;
+(BOOL)defaultSandboxWithHelperAppPath:(const char*)arg1 ;
+(BOOL)sandboxWithSeatbeltAbsolutePath:(const char*)arg1 helperAppPath:(const char*)arg2 ;
@end
