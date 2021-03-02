/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SATimestamp;

@interface SAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	SATimestamp* _timestamp;
	unsigned long long _tid;

}

@property (readonly) unsigned debugid;                     //@synthesize debugid=_debugid - In the implementation block
@property (readonly) SATimestamp * timestamp; 
@property (readonly) int pid;                              //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;               //@synthesize tid=_tid - In the implementation block
-(unsigned long long)tid;
-(SATimestamp *)timestamp;
-(int)pid;
-(unsigned)debugid;
-(id)debugDescription;
@end
