/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct OSSharedRef<os_log_s> {
	os_log_s fRef;
} OSSharedRef<os_log_s>;

typedef struct OsLogContext {
	char* domain;
	OSSharedRef<os_log_s> handle;
} OsLogContext;

