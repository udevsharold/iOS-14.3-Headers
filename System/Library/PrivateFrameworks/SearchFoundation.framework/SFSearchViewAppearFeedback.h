/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback {

	BOOL _isOnLockScreen;
	BOOL _isOverApp;
	BOOL _readerTextAvailable;
	unsigned long long _viewAppearEvent;
	NSString* _preexistingInput;

}

@property (assign,nonatomic) unsigned long long viewAppearEvent;              //@synthesize viewAppearEvent=_viewAppearEvent - In the implementation block
@property (assign,nonatomic) BOOL isOnLockScreen;                             //@synthesize isOnLockScreen=_isOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL isOverApp;                                  //@synthesize isOverApp=_isOverApp - In the implementation block
@property (assign,nonatomic) BOOL readerTextAvailable;                        //@synthesize readerTextAvailable=_readerTextAvailable - In the implementation block
@property (nonatomic,copy) NSString * preexistingInput;                       //@synthesize preexistingInput=_preexistingInput - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isOverApp;
-(NSString *)preexistingInput;
-(BOOL)readerTextAvailable;
-(void)setViewAppearEvent:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsOnLockScreen:(BOOL)arg1 ;
-(void)setIsOverApp:(BOOL)arg1 ;
-(void)setReaderTextAvailable:(BOOL)arg1 ;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(void)setPreexistingInput:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)viewAppearEvent;
-(BOOL)isOnLockScreen;
@end
