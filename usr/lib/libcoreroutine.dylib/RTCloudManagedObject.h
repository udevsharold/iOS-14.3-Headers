/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RTPersistenceImportable.h>

@class RTDeviceMO, NSString, NSData, NSUUID, NSDate;

@interface RTCloudManagedObject : NSManagedObject <RTPersistenceImportable>

@property (nonatomic,retain) RTDeviceMO * device; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,copy) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) unsigned long long flags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityNamesEligibleForDeletionByOtherDevices;
+(id)notTombstonedPredicate;
-(void)awakeFromInsert;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

