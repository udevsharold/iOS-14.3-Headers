/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface br_pacer : NSObject {

	NSObject*<OS_dispatch_source> source;
	NSObject*<OS_dispatch_source> timer;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id event_block;
	double last_fire_time;
	double min_fire_interval;
	AB ever_resumed;

}
-(void)dealloc;
@end
