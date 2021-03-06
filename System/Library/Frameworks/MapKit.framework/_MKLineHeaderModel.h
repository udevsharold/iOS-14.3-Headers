/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIView, NSDictionary;

@interface _MKLineHeaderModel : NSObject {

	NSMutableArray* _tokens;
	BOOL _shouldUseEmptyPlaceholder;
	UIView* _ownerView;
	NSDictionary* _fontAttribute;
	/*^block*/id _colorProvider;

}

@property (assign,nonatomic,__weak) UIView * ownerView;                   //@synthesize ownerView=_ownerView - In the implementation block
@property (nonatomic,copy) NSDictionary * fontAttribute;                  //@synthesize fontAttribute=_fontAttribute - In the implementation block
@property (nonatomic,copy) id colorProvider;                              //@synthesize colorProvider=_colorProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldUseEmptyPlaceholder;              //@synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder - In the implementation block
-(void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(UIView *)ownerView;
-(id)description;
-(id)_placeCardHeaderSeparatorString;
-(id)colorProvider;
-(NSDictionary *)fontAttribute;
-(BOOL)shouldUseEmptyPlaceholder;
-(void)addToken:(id)arg1 ;
-(void)removeToken:(id)arg1 ;
-(void)setOwnerView:(UIView *)arg1 ;
-(void)setShouldUseEmptyPlaceholder:(BOOL)arg1 ;
-(void)setColorProvider:(id)arg1 ;
-(id)contentAttributedString;
-(void)setFontAttribute:(NSDictionary *)arg1 ;
@end

