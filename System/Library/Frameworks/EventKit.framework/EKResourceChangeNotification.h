/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKNotification.h>

@class NSDate, NSSet;

@interface EKResourceChangeNotification : EKNotification

@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSSet * resourceChanges; 
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
-(NSSet *)resourceChanges;
-(void)setResourceChanges:(NSSet *)arg1 ;
-(void)addResourceChange:(id)arg1 ;
-(void)removeResourceChange:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
@end

