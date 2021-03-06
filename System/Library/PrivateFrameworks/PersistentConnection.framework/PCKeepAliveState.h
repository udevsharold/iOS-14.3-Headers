/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PCKeepAliveState : NSObject {

	unsigned char _state;
	unsigned char _subState;

}

@property (assign,nonatomic) unsigned char state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned char subState;              //@synthesize subState=_subState - In the implementation block
-(void)setSubState:(unsigned char)arg1 ;
-(id)initWithKeepAliveState:(unsigned char)arg1 subState:(unsigned char)arg2 ;
-(unsigned char)state;
-(unsigned char)subState;
-(void)setState:(unsigned char)arg1 ;
@end

