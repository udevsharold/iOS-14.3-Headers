/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SATask, NSArray;

@interface SATaskThreadCallTrees : NSObject {

	SATask* _task;
	NSArray* _threadCallTrees;

}

@property (readonly) SATask * task;                          //@synthesize task=_task - In the implementation block
@property (readonly) NSArray * threadCallTrees;              //@synthesize threadCallTrees=_threadCallTrees - In the implementation block
-(SATask *)task;
-(NSArray *)threadCallTrees;
@end
