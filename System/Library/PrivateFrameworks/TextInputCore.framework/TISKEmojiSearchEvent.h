/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKTimestampEvent.h>

@interface TISKEmojiSearchEvent : TISKTimestampEvent {

	BOOL _engaged;

}

@property (assign,nonatomic) BOOL engaged;              //@synthesize engaged=_engaged - In the implementation block
-(id)description;
-(void)setEngaged:(BOOL)arg1 ;
-(BOOL)engaged;
-(void)reportToSession:(id)arg1 ;
-(id)init:(double)arg1 engaged:(BOOL)arg2 order:(long long)arg3 ;
@end

