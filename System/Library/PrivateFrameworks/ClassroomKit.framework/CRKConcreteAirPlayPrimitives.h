/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKAirPlayPrimitives.h>

@class AVOutputContext, NSNotificationCenter;

@interface CRKConcreteAirPlayPrimitives : NSObject <CRKAirPlayPrimitives> {

	AVOutputContext* _outputContext;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;                        //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<CRKOutputDevice> localOutputDevice; 
@property (nonatomic,readonly) id<CRKOutputDevice> currentOutputDevice; 
-(NSNotificationCenter *)notificationCenter;
-(AVOutputContext *)outputContext;
-(id<CRKOutputDevice>)currentOutputDevice;
-(id)initWithOutputContext:(id)arg1 notificationCenter:(id)arg2 ;
-(id)beginOutputDeviceBrowsingSession;
-(id)observeCurrentOutputDeviceChangesWithHandler:(/*^block*/id)arg1 ;
-(id<CRKOutputDevice>)localOutputDevice;
@end
