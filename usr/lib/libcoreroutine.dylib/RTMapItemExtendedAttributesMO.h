/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSNumber;

@interface RTMapItemExtendedAttributesMO : NSManagedObject

@property (nonatomic,copy) NSString * addressIdentifier; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * isMe; 
@property (nonatomic,copy) NSNumber * wifiConfidence; 
@property (nonatomic,copy) NSNumber * wifiFingerprintLabelType; 
+(id)fetchRequest;
+(id)managedObjectWithExtendedAttributes:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithExtendedAttributes:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end
