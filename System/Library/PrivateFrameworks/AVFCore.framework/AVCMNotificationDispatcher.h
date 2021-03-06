/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AVCMNotificationDispatcher : NSObject {

	opaqueCMNotificationCenterRef _cmNotificationCenter;
	NSObject*<OS_dispatch_queue> _listenerObjectsQueue;
	NSMutableDictionary* _observersForListenerKeys;

}

@property (nonatomic,readonly) opaqueCMNotificationCenterRef CMNotificationCenter; 
+(void)initialize;
+(id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 ;
-(id)_copyAndRemoveObserverForWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 ;
-(opaqueCMNotificationCenterRef)CMNotificationCenter;
-(void)addListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 flags:(unsigned)arg5 ;
-(id)initWithCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
@end

