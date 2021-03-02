/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WFDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
-(void)dealloc;
-(BOOL)isCancelled;
-(void)cancel;
-(void)start;
-(NSObject*<OS_dispatch_source>)source;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end
