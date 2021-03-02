/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface STUsageRequest : NSManagedObject

@property (nonatomic,retain) NSDate * acknowledgedDate; 
@property (nonatomic,retain) NSNumber * forUserDSID; 
@property (nonatomic,retain) NSDate * requestedDate; 
@property (assign,nonatomic) BOOL isBackgroundTask; 
+(id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end
