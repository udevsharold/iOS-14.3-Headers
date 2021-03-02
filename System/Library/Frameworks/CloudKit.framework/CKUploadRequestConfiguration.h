/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	NSString* _applicationBundleIdentifierOverride;
	CKRecordZoneID* _repairZoneID;

}

@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverride;              //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * repairZoneID;                               //@synthesize repairZoneID=_repairZoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationFromBaseContainer:(id)arg1 ;
+(id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2 ;
-(NSString *)containerIdentifier;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRepairZoneID:(CKRecordZoneID *)arg1 ;
-(id)initFromBaseContainer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverride;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(CKRecordZoneID *)repairZoneID;
-(void)encodeWithCoder:(id)arg1 ;
@end
