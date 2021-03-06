/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton {

	BOOL _useCompactMode;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL useCompactMode;                  //@synthesize useCompactMode=_useCompactMode - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(BOOL)useCompactMode;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(unsigned long long)type;
-(void)updateWithType:(unsigned long long)arg1 ;
-(BOOL)isPlayButton;
-(void)setFixedSize:(CGSize)arg1 ;
@end

