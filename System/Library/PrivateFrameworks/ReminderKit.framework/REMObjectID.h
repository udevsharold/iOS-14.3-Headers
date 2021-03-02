/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>
#import <libobjc.A.dylib/REMCRMergeableDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSURL;

@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _entityName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                        //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSURL * urlRepresentation; 
+(void)initialize;
+(id)objectIDWithUUID:(id)arg1 entityName:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)rem_registerClassAtCRCoderIfNeeded;
+(id)objectIDWithURL:(id)arg1 ;
-(NSString *)entityName;
-(NSString *)stringRepresentation;
-(NSURL *)urlRepresentation;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)tombstone;
-(id)initWithUUID:(id)arg1 entityName:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSString *)debugDescription;
-(id)redactedDescription;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
