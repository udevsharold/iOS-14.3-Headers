/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSDictionary, NSNumber, NSDate, NSString, NSArray;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSDictionary * user; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,retain) NSString * messageIdentifier; 
@property (nonatomic,retain) NSNumber * responseReceived; 
@property (nonatomic,retain) NSString * inviteeDestinationAddress; 
@property (nonatomic,retain) NSArray * operations; 
@property (nonatomic,retain) NSArray * operationIdentifiers; 
+(id)properties;
-(id)dependentUUIDs;
@end
