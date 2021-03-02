/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {

	SASRequestOptions* _options;
	long long _state;
	NSMapTable* _observers;

}

@property (nonatomic,readonly) SASRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long state;                          //@synthesize state=_state - In the implementation block
-(long long)state;
-(void)_updateState:(long long)arg1 ;
-(SASRequestOptions *)options;
-(id)initWithRequestOptions:(id)arg1 updateHandle:(/*^block*/id*)arg2 ;
-(void)addTriggerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTriggerTarget:(id)arg1 ;
@end
