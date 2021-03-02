/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIUserAction.h>

@class NSString;

@interface TICursorEvent : TIUserAction {

	BOOL _isSelection;
	BOOL _extendsPriorWord;
	NSString* _inWord;
	unsigned long long _selectionLocation;
	NSRange _inWordRange;

}

@property (assign,nonatomic) BOOL isSelection;                                  //@synthesize isSelection=_isSelection - In the implementation block
@property (assign,nonatomic) BOOL extendsPriorWord;                             //@synthesize extendsPriorWord=_extendsPriorWord - In the implementation block
@property (nonatomic,copy) NSString * inWord;                                   //@synthesize inWord=_inWord - In the implementation block
@property (assign,nonatomic) NSRange inWordRange;                               //@synthesize inWordRange=_inWordRange - In the implementation block
@property (assign,nonatomic) unsigned long long selectionLocation;              //@synthesize selectionLocation=_selectionLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExtendsPriorWord:(BOOL)arg1 ;
-(void)setSelectionLocation:(unsigned long long)arg1 ;
-(unsigned long long)selectionLocation;
-(BOOL)isSelection;
-(id)initWithCoder:(id)arg1 ;
-(void)setInWord:(NSString *)arg1 ;
-(id)description;
-(id)initWithTIKeyboardState:(id)arg1 ;
-(NSRange)inWordRange;
-(void)setInWordRange:(NSRange)arg1 ;
-(BOOL)extendsPriorWord;
-(void)setIsSelection:(BOOL)arg1 ;
-(NSString *)inWord;
-(void)encodeWithCoder:(id)arg1 ;
@end
