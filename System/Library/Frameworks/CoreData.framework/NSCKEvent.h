/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSDate, NSString;

@interface NSCKEvent : NSManagedObject

@property (nonatomic,retain) NSUUID * eventIdentifier; 
@property (assign,nonatomic) long long cloudKitEventType; 
@property (nonatomic,retain) NSDate * startedAt; 
@property (nonatomic,retain) NSDate * endedAt; 
@property (assign,nonatomic) BOOL succeeded; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) long long errorCode; 
@property (assign,nonatomic) long long countAffectedObjects; 
@property (assign,nonatomic) long long countFinishedObjects; 
+(long long)eventTypeForRequest:(id)arg1 ;
+(id)finishEventForResult:(id)arg1 withMonitor:(id)arg2 error:(id*)arg3 ;
+(id)entityPath;
+(id)beginEventForRequest:(id)arg1 withMonitor:(id)arg2 error:(id*)arg3 ;
+(id)fetchExistingEventWithIdentifier:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
@end

