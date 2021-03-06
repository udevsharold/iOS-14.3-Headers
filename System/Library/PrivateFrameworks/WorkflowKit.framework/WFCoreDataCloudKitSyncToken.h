/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData;

@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * lastOrderingCloudKitRecordMetadata; 
@property (nonatomic,retain) NSData * lastOrderingData; 
@property (nonatomic,retain) NSData * serverChangeTokenData; 
@property (nonatomic,retain) NSData * syncEngineMetadata; 
@property (nonatomic,retain) NSData * syncFlagsCloudKitRecordMetadata; 
+(id)fetchRequest;
-(id)descriptor;
@end

