/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

@interface CKDAssetVolume : CKObject {

	NSNumber* _volumeIndex;
	NSUUID* _volumeUUID;

}

@property (nonatomic,retain) NSNumber * volumeIndex;              //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSUUID * volumeUUID;                 //@synthesize volumeUUID=_volumeUUID - In the implementation block
+(id)CKSQLiteClassName;
-(id)CKPropertiesDescription;
-(id)description;
-(void)setVolumeUUID:(NSUUID *)arg1 ;
-(NSUUID *)volumeUUID;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
@end

