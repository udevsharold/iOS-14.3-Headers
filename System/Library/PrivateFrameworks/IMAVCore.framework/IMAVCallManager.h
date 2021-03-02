/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

@interface IMAVCallManager : NSObject {

	IMPowerAssertion* _powerAssertion;
	NSMutableArray* _chatArray;
	NSMutableArray* _acChatProxyArray;
	NSMutableArray* _avChatProxyArray;
	NSMutableDictionary* _guidToACChatProxyMap;
	NSMutableDictionary* _guidToAVChatProxyMap;
	NSDate* _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned _avCallState;
	unsigned _acCallState;
	unsigned _globalCallState;

}

@property (nonatomic,readonly) NSArray * _FTCalls; 
@property (nonatomic,readonly) unsigned callState; 
@property (nonatomic,readonly) BOOL hasActiveCall; 
@property (nonatomic,readonly) NSArray * calls; 
+(id)sharedInstance;
-(NSArray *)calls;
-(BOOL)_hasActiveFaceTimeCall;
-(void)_setAVCallState:(unsigned)arg1 ;
-(id)init;
-(id)_activeFaceTimeCall;
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_updateAVCallState;
-(void)_setACCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)_setAVCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(id)_mutableFTCalls;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(void)_updateACCallState;
-(id)_calls;
-(void)_postStateChangeIfNecessary;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(BOOL)hasActiveCall;
-(unsigned)_callState;
-(void)_updateOverallChatState;
-(id)_nonRetainingChatList;
-(id)_activeAudioCall;
-(void)_addACChatProxy:(id)arg1 ;
-(unsigned)callState;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(BOOL)arg4 type:(unsigned)arg5 ;
-(NSArray *)_FTCalls;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(void)_sendProxyUpdate;
-(BOOL)_hasActiveAudioCall;
-(void)_setACCallState:(unsigned)arg1 ;
-(id)_copyMutableFTCalls;
@end
