/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUIAnalyticsSession : NSObject {

	BOOL _sessionActive;

}

@property (getter=isSessionActive,nonatomic,readonly) BOOL sessionActive;              //@synthesize sessionActive=_sessionActive - In the implementation block
+(id)currentInputModeIdentifier;
+(id)preferredEventName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isSessionActive;
-(void)endSession;
-(void)beginSession;
@end
