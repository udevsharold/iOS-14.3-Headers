/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, UploadRecord;

@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic,retain) NSString * caseID; 
@property (nonatomic,retain) NSString * caseGroupID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSDate * caseClosedTime; 
@property (nonatomic,retain) NSString * caseDomain; 
@property (nonatomic,retain) NSString * caseType; 
@property (nonatomic,retain) NSString * caseSubtype; 
@property (nonatomic,retain) NSString * caseSubtypeContext; 
@property (nonatomic,retain) NSString * caseDetectedProcess; 
@property (nonatomic,retain) NSString * caseEffectiveProcess; 
@property (nonatomic,retain) NSString * caseRelatedProcesses; 
@property (nonatomic,retain) NSString * caseThresholdValues; 
@property (assign,nonatomic) short caseState; 
@property (assign,nonatomic) short caseClosureType; 
@property (assign,nonatomic) short caseDampeningType; 
@property (nonatomic,retain) NSString * caseEvents; 
@property (nonatomic,retain) NSString * casePayloads; 
@property (nonatomic,retain) NSString * caseAttachments; 
@property (nonatomic,retain) NSString * caseContext; 
@property (nonatomic,retain) NSString * caseObjectVersion; 
@property (assign,nonatomic) BOOL remoteTrigger; 
@property (assign,nonatomic) BOOL attachmentsIncomplete; 
@property (assign,nonatomic) short uploadState; 
@property (nonatomic,retain) UploadRecord * uploadRecord; 
@property (nonatomic,retain) NSString * buildVariant; 
@property (nonatomic,retain) NSString * buildVersion; 
@end
