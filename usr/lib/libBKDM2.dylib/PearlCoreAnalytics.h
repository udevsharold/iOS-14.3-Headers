/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libBKDM2.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDServerConnection, NSDate, BiometricAutoBugCapture;

@interface PearlCoreAnalytics : NSObject {

	AWDServerConnection* awdConnection;
	NSDate* _yogiErrorDate;
	BOOL _isInternalBuild;
	unsigned _totalMatchAttempts;
	unsigned _totalMatchAttemptsFaceDetected;
	unsigned _totalMatchAttemptsFailed;
	unsigned _totalMatchAttemptsSuccessful;
	/*^block*/id _analyticsPerformCommandBlock;
	BiometricAutoBugCapture* _pearlAbc;

}

@property (nonatomic,copy) id analyticsPerformCommandBlock;                   //@synthesize analyticsPerformCommandBlock=_analyticsPerformCommandBlock - In the implementation block
@property (nonatomic,retain) BiometricAutoBugCapture * pearlAbc;              //@synthesize pearlAbc=_pearlAbc - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setPearlAbc:(BiometricAutoBugCapture *)arg1 ;
-(void)setAnalyticsPerformCommandBlock:(id)arg1 ;
-(void)sendMatchEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 identities:(id)arg3 ;
-(void)sendFaceDetectEventAnalytics:(id)arg1 fromMatch:(BOOL)arg2 orientation:(unsigned long long)arg3 ;
-(void)sendEnrollEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 ;
-(void)sendPasscodeChallengeEventAnalytics:(id)arg1 orientation:(unsigned long long)arg2 ;
-(void)sendBioLockoutEventAnalytics:(id)arg1 ;
-(id)getDailyUpdateAnalytics;
-(int)sequenceTypeToCaptureMethod:(unsigned char)arg1 forSequence:(unsigned char)arg2 ;
-(void)sendPearlAbcEvent:(unsigned long long)arg1 ;
-(void)checkYogiError:(int)arg1 ;
-(void)countMatchAttempts:(BOOL)arg1 withFaceDetectResult:(unsigned)arg2 ;
-(void)clearMatchAttempts;
-(void)persistsMatchAttempts;
-(id)analyticsPerformCommandBlock;
-(BiometricAutoBugCapture *)pearlAbc;
@end
