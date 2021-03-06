/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding> {

	NSData* _managerData;
	unsigned long long _version;

}

@property (nonatomic,readonly) BOOL isRepresentingDiscardedReplicaManager; 
@property (nonatomic,readonly) NSData * managerData;                                    //@synthesize managerData=_managerData - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serializedDataRepresentingDiscardedReplicaManager;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)version;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)managerData;
-(BOOL)isRepresentingDiscardedReplicaManager;
-(id)initWithManagerData:(id)arg1 version:(unsigned long long)arg2 ;
@end

