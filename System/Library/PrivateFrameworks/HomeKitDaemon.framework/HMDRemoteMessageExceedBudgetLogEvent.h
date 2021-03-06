/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString;

@interface HMDRemoteMessageExceedBudgetLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {

	HMFRate _budgetRate;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (nonatomic,readonly) HMFRate budgetRate;                              //@synthesize budgetRate=_budgetRate - In the implementation block
+(id)identifier;
+(id)eventWithBudgetRate:(HMFRate)arg1 ;
-(id)initWithBudgetRate:(HMFRate)arg1 ;
-(HMFRate)budgetRate;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

