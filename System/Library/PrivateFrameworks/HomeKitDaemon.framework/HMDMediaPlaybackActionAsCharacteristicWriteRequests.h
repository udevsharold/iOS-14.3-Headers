/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDMediaPlaybackAction, NSArray;

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject {

	HMDMediaPlaybackAction* _residualAction;
	NSArray* _characteristicWriteRequests;

}

@property (readonly) HMDMediaPlaybackAction * residualAction;              //@synthesize residualAction=_residualAction - In the implementation block
@property (readonly) NSArray * characteristicWriteRequests;                //@synthesize characteristicWriteRequests=_characteristicWriteRequests - In the implementation block
-(id)init;
-(NSArray *)characteristicWriteRequests;
-(HMDMediaPlaybackAction *)residualAction;
-(id)initWithAction:(id)arg1 characteristicWriteRequests:(id)arg2 ;
@end

