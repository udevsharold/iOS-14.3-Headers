/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying> {

	NSUUID* _UUID;
	NSUUID* _personManagerUUID;
	NSUUID* _personUUID;
	NSString* _personName;
	NSUUID* _unassociatedFaceCropUUID;

}

@property (copy) NSUUID * personUUID;                              //@synthesize personUUID=_personUUID - In the implementation block
@property (copy) NSString * personName;                            //@synthesize personName=_personName - In the implementation block
@property (copy) NSUUID * unassociatedFaceCropUUID;                //@synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID - In the implementation block
@property (copy,readonly) NSUUID * UUID;                           //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSUUID * personManagerUUID;              //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
+(id)faceClassificationWithHMIFaceClassification:(id)arg1 person:(id)arg2 ;
-(NSUUID *)personUUID;
-(id)attributeDescriptions;
-(void)setPersonUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(void)setPersonName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)personManagerUUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)personName;
-(NSUUID *)unassociatedFaceCropUUID;
-(void)setUnassociatedFaceCropUUID:(NSUUID *)arg1 ;
-(id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2 ;
@end

