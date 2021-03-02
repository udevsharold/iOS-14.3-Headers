/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID, NSArray;


@protocol ACXSyncedApp <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSUUID * databaseUUID; 
@property (nonatomic,readonly) unsigned long long sequenceNumber; 
@property (nonatomic,copy,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isDeletable; 
@required
-(unsigned long long)sequenceNumber;
-(unsigned long long)applicationType;
-(BOOL)isDeletable;
-(NSArray *)counterpartIdentifiers;
-(NSUUID *)databaseUUID;
-(BOOL)isSystemApp;
-(NSString *)bundleIdentifier;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
-(id)serializeAsRemoteApplication;

@end
