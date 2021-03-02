/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardInputManagerLogging.h>

@class NSString, TITypologyLog, TITypologyStatistic;

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging> {

	NSString* _inputModeIdentifier;
	TITypologyLog* _typologyLog;
	TITypologyStatistic* _typologyStatistic;

}

@property (nonatomic,retain) NSString * inputModeIdentifier;                       //@synthesize inputModeIdentifier=_inputModeIdentifier - In the implementation block
@property (nonatomic,retain) TITypologyLog * typologyLog;                          //@synthesize typologyLog=_typologyLog - In the implementation block
@property (nonatomic,retain) TITypologyStatistic * typologyStatistic;              //@synthesize typologyStatistic=_typologyStatistic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writePropertyList:(id)arg1 withFilename:(id)arg2 ;
+(void)writeHumanReadableTraceForTypologyLog:(id)arg1 ;
+(id)writeToFileWithTypologyLog:(id)arg1 ;
+(void)submitStructuredDataReportForTypologyLog:(id)arg1 ;
+(void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2 ;
+(id)accessibilityConfigInfo;
+(id)generateStructuredDataReportForTypologyLog:(id)arg1 ;
+(void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(/*^block*/id)arg2 ;
+(BOOL)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1 ;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4 ;
-(id)init;
-(void)setTypologyLog:(TITypologyLog *)arg1 ;
-(void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logReceivedTextAccepted:(id)arg1 ;
-(void)setInputModeIdentifier:(NSString *)arg1 ;
-(TITypologyStatistic *)typologyStatistic;
-(void)backgroundWriteLogsAndSubmitReport;
-(void)logKeyboardLayout:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(void)setTypologyStatistic:(TITypologyStatistic *)arg1 ;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3 ;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3 ;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg2 granularity:(int)arg3 keyboardState:(id)arg4 ;
-(id)writeToFile;
-(void)logReceivedSetOriginalInput:(id)arg1 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
-(void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3 ;
-(BOOL)shouldWriteToTypologyLogForKeyboardState:(id)arg1 ;
-(void)logReceivedCandidateRejected:(id)arg1 ;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3 ;
-(void)setConfig:(id)arg1 ;
-(TITypologyLog *)typologyLog;
-(NSString *)inputModeIdentifier;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2 ;
-(BOOL)shouldWriteToSyslogForKeyboardState:(id)arg1 ;
-(void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4 ;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2 ;
@end
