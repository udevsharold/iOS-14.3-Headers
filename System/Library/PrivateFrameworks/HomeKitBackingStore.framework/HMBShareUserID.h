/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding> {

	CKRecordID* _userRecordID;

}

@property (readonly) CKRecordID * userRecordID;              //@synthesize userRecordID=_userRecordID - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUserRecordID:(id)arg1 ;
-(CKRecordID *)userRecordID;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
