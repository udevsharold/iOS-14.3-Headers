/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLiquidDetectionManager : NSObject {

	int _wetToken;
	BOOL _finishedInit;
	BOOL _detectionEnabled;
	BOOL _accessoryPortWet;

}

@property (getter=isAccessoryPortWet,nonatomic,readonly) BOOL accessoryPortWet;              //@synthesize accessoryPortWet=_accessoryPortWet - In the implementation block
@property (getter=isDetectionEnabled,nonatomic,readonly) BOOL detectionEnabled;              //@synthesize detectionEnabled=_detectionEnabled - In the implementation block
@property (getter=isLiquidDetected,nonatomic,readonly) BOOL liquidDetected; 
+(id)sharedInstance;
+(BOOL)showStatusBarIcon;
-(BOOL)isLiquidDetected;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(void)_stateDidUpdate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAccessoryPortWet;
-(BOOL)_showStatusBarIcon;
-(id)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isDetectionEnabled;
-(void)_finishInit;
-(void)_updateStatusBar;
-(void)_updateWetState;
@end

