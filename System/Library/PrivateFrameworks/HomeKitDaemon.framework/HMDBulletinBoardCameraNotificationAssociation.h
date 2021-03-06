/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject {

	HMDCameraProfile* _cameraProfile;
	NSMutableSet* _notificationGeneratingServicesWithCamera;

}

@property (nonatomic,readonly) HMDCameraProfile * cameraProfile;                                     //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) NSMutableSet * notificationGeneratingServicesWithCamera;              //@synthesize notificationGeneratingServicesWithCamera=_notificationGeneratingServicesWithCamera - In the implementation block
-(HMDCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 ;
-(id)description;
-(NSMutableSet *)notificationGeneratingServicesWithCamera;
@end

