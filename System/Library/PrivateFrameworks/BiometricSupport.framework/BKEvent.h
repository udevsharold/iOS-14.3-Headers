/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BKEvent : NSObject {

	unsigned char _cls;
	BOOL _isStart;
	BOOL _isTerminal;
	BOOL _isMetadata;
	BOOL _isSmartKeyboard;
	BOOL _isHigh;
	BOOL _isLow;
	unsigned _event;

}

@property (readonly) unsigned char cls;                 //@synthesize cls=_cls - In the implementation block
@property (readonly) unsigned event;                    //@synthesize event=_event - In the implementation block
@property (readonly) BOOL isStart;                      //@synthesize isStart=_isStart - In the implementation block
@property (readonly) BOOL isTerminal;                   //@synthesize isTerminal=_isTerminal - In the implementation block
@property (readonly) BOOL isMetadata;                   //@synthesize isMetadata=_isMetadata - In the implementation block
@property (readonly) BOOL isSmartKeyboard;              //@synthesize isSmartKeyboard=_isSmartKeyboard - In the implementation block
@property (readonly) BOOL isHigh;                       //@synthesize isHigh=_isHigh - In the implementation block
@property (readonly) BOOL isLow;                        //@synthesize isLow=_isLow - In the implementation block
-(unsigned char)cls;
-(BOOL)isMetadata;
-(BOOL)isLow;
-(BOOL)isTerminal;
-(unsigned)event;
-(id)description;
-(void)encodeEventValue:(unsigned*)arg1 secondValue:(unsigned*)arg2 ;
-(id)initWithEncodedEventOrCode:(unsigned)arg1 ;
-(id)initWithEventOrCode:(unsigned long long)arg1 ;
-(BOOL)isSmartKeyboard;
-(void)setProperties;
-(BOOL)isStart;
-(BOOL)isHigh;
@end

