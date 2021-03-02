/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SDRDiagnosticReporter;

@interface CACBugReporter : NSObject {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
+(id)sharedReporter;
-(id)init;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 ;
@end
