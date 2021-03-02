/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (nonatomic,copy) NSDate * importDate; 
@property (nonatomic,copy) NSString * sourceAppIdentifier; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
@end
