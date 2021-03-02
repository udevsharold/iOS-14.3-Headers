/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate, HMBModelCloudReference, CKAsset, NSDictionary;

@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) NSNumber * significantEvent; 
@property (retain) NSNumber * confidenceLevel; 
@property (retain) NSDate * dateOfOccurrence; 
@property (retain) NSNumber * timeOffsetWithinClip; 
@property (retain) HMBModelCloudReference * associatedClip; 
@property (retain) CKAsset * heroFrameAsset; 
@property (retain) CKAsset * faceCropAsset; 
@property (retain) NSDictionary * homePresenceByPairingIdentity; 
+(id)hmbQueries;
+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
-(id)createClipSignificantEventWithCameraProfileUUID:(id)arg1 faceClassification:(id)arg2 ;
@end
