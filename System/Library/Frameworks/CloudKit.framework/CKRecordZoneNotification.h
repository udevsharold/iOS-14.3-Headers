/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {

	CKRecordZoneID* _recordZoneID;
	long long _databaseScope;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                  //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecordZoneID *)recordZoneID;
-(long long)databaseScope;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
