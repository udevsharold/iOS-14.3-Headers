/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSObject, NSMutableArray, NSString, AVSampleBufferDisplayLayer;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {

	AVWeakReference* weakObserver;
	OpaqueCMTimebaseRef readOnlyTimebase;
	NSObject*<OS_dispatch_queue> rateQueue;
	float rate;
	SCD_Struct_AV6 mostRecentlySetTime;
	NSObject*<OS_dispatch_queue> rendererListQueue;
	NSMutableArray* renderers;
	NSMutableArray* timedRenderRemovals;
	NSObject*<OS_dispatch_queue> figSynchronizerAccessQueue;
	OpaqueFigSampleBufferRenderSynchronizerRef figSynchronizer;
	NSString* STSLabel;
	AVSampleBufferDisplayLayer* layerTrackedBySTS;

}
@end
