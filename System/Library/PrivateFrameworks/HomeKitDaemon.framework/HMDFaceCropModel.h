/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate, HMBModelCloudReference, NSUUID;

@interface HMDFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
@property (retain) HMBModelCloudReference * person; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbQueries;
+(id)hmbProperties;
+(id)faceCropsForPersonQuery;
+(id)faceCropsForAnyPersonQuery;
+(id)faceCropsForNoPersonQuery;
+(id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+(id)sentinelParentUUID;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(CGRect)faceBoundingBox;
-(id)initWithPersonFaceCrop:(id)arg1 ;
-(id)createFaceCrop;
-(id)createPersonFaceCrop;
@end
