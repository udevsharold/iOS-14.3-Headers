/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponentsFormatter, NSString;

@interface IMDTaskProgress : NSObject {

	unsigned long long _lastPercentComplete;
	double _startTime;
	NSDateComponentsFormatter* _intervalFormatter;
	NSString* _taskName;
	unsigned long long _totalCount;

}

@property (nonatomic,readonly) NSString * taskName;                        //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(NSString *)taskName;
-(void)dealloc;
-(unsigned long long)totalCount;
-(id)initWithTaskName:(id)arg1 totalCount:(unsigned long long)arg2 ;
-(void)startTrackingTime;
-(void)updateWithCompletedCount:(unsigned long long)arg1 ;
@end

