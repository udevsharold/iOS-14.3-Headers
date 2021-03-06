/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSSet;

@interface GamesPlayed : NSManagedObject

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * playerID; 
@property (nonatomic,retain) NSSet * entries; 
+(id)fetchRequest;
@end

