/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, NSNumber, NSDate, NSData;

@interface _DKCustomMetadataMO : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSSet * event; 
@property (nonatomic,copy) NSNumber * doubleValue; 
@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,copy) NSString * valueHash; 
+(id)fetchRequest;
@end

