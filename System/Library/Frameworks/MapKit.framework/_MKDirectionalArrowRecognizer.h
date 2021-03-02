/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MKDirectionalArrowRecognizer : NSObject {

	id _target;
	SEL _action;
	long long _state;
	long long _arrows;
	long long _lastArrows;
	long long _modifierFlags;

}

@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) long long arrows;                   //@synthesize arrows=_arrows - In the implementation block
@property (nonatomic,readonly) long long lastArrows;               //@synthesize lastArrows=_lastArrows - In the implementation block
-(long long)modifierFlags;
-(long long)arrows;
-(void)keyDown:(id)arg1 ;
-(long long)state;
-(long long)lastArrows;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)keyUp:(id)arg1 ;
-(void)setModifierFlags:(long long)arg1 ;
-(void)handleArrowMask:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
@end
