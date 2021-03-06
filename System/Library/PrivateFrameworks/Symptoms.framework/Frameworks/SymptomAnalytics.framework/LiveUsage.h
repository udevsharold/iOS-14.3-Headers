/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, Process;

@interface LiveUsage : NSManagedObject

@property (nonatomic,copy) NSNumber * allFlows; 
@property (nonatomic,copy) NSDate * billCycleEnd; 
@property (nonatomic,copy) NSNumber * jumboFlows; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * metadata; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * wifiIN; 
@property (nonatomic,copy) NSNumber * wifiOUT; 
@property (nonatomic,copy) NSNumber * wiredIN; 
@property (nonatomic,copy) NSNumber * wiredOUT; 
@property (nonatomic,copy) NSNumber * wwanIN; 
@property (nonatomic,copy) NSNumber * wwanOUT; 
@property (nonatomic,copy) NSNumber * xIN; 
@property (nonatomic,copy) NSNumber * xOUT; 
@property (nonatomic,retain) Process * hasProcess; 
@property (nonatomic,retain) Process * hintedBy; 
+(id)entityName;
+(id)fetchRequest;
@end

