/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBAuthenticationFeedback : NSObject {

	unsigned long long result;
	BOOL _vibrate;
	BOOL _showPasscode;
	BOOL _jiggleLock;
	unsigned long long _result;

}

@property (nonatomic,readonly) unsigned long long result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL showPasscode;                      //@synthesize showPasscode=_showPasscode - In the implementation block
@property (nonatomic,readonly) BOOL hintFailureText; 
@property (nonatomic,readonly) BOOL vibrate;                           //@synthesize vibrate=_vibrate - In the implementation block
@property (nonatomic,readonly) BOOL jiggleLock;                        //@synthesize jiggleLock=_jiggleLock - In the implementation block
-(unsigned long long)result;
-(BOOL)vibrate;
-(unsigned long long)hash;
-(BOOL)showPasscode;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initForFailureWithFailureSettings:(id)arg1 ;
-(id)initForSuccess;
-(id)initForFailureShowingPasscode:(BOOL)arg1 ;
-(BOOL)jiggleLock;
-(BOOL)hintFailureText;
@end

