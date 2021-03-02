/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {

	NSString* _text;
	NSArray* _alternativeInterpretations;
	long long _style;

}

@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeInterpretations;              //@synthesize alternativeInterpretations=_alternativeInterpretations - In the implementation block
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3 ;
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(NSString *)text;
-(void)dealloc;
-(long long)style;
-(NSArray *)alternativeInterpretations;
-(void)setStyle:(long long)arg1 ;
-(id)description;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3 ;
@end
