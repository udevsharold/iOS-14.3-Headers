/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_workloop;
@class NSObject, NSString, NSMutableDictionary;

@interface BRCFairScheduler : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSString* _name;
	unsigned long long _maxRegistedSourceBit;
	unsigned long long _lastVisitedBit;
	NSMutableDictionary* _sourceForBitIndex;
	BOOL _resumed;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> workloop; 
-(void)schedule;
-(void)dealloc;
-(void)cancel;
-(void)addSource:(id)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)suspend;
-(void)close;
-(void)resume;
-(id)initWithWorkloop:(id)arg1 name:(id)arg2 ;
-(id)sourceForBitIndex:(unsigned long long)arg1 ;
-(void)unregisterSources;
-(void)signalSourceForBitIndex:(unsigned long long)arg1 ;
@end

