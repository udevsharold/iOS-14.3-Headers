/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSData;

@interface ManagedSyncEncryptionKey : NSManagedObject

@property (copy,nonatomic) NSString * etag; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSData * key; 
@property (copy,nonatomic) NSString * zoneName; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
