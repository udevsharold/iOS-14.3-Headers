/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>
#import <AVFCore/AVDestinationChangeResultSource.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, NSObject, AVOutputContextDestinationChange, NSString;

@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {

	AVWeakReference* _weakObserver;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _routeChangeID;
	/*^block*/id _routeChangeBlock;
	NSObject*<OS_dispatch_queue> _routeChangeIvarAccessQueue;
	AVOutputContextDestinationChange* _result;

}

@property (nonatomic,readonly) AVOutputContextDestinationChange * result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(AVOutputContextDestinationChange *)result;
-(id)init;
-(void)dealloc;
-(BOOL)isAsynchronous;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 routeChangeID:(CFStringRef)arg2 routeChangeBlock:(/*^block*/id)arg3 ;
-(void)_setResultIfNotAlreadySet:(id)arg1 ;
-(void)_routeConfigUpdateWithID:(CFStringRef)arg1 endedWithReason:(CFStringRef)arg2 ;
-(void)start;
@end
