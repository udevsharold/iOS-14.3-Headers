/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface SendingDestination : NSManagedObject

@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,copy) NSDate * registrationDate; 
@property (assign,nonatomic) int validOutgoingCounter; 
+(id)fetchRequest;
@end

