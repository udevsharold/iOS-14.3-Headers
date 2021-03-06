/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject {

	SKUICardViewElement* _cardViewElement;
	SKUIViewElementLayoutContext* _layoutContext;
	BOOL _hasBackground;

}

@property (nonatomic,readonly) SKUICardViewElement * cardViewElement;                     //@synthesize cardViewElement=_cardViewElement - In the implementation block
@property (nonatomic,readonly) SKUIViewElementLayoutContext * layoutContext;              //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,readonly) double horizontalContentInset; 
@property (nonatomic,readonly) long long layoutStyle; 
+(id)layoutWithCardViewElement:(id)arg1 context:(id)arg2 ;
+(BOOL)allowsViewElement:(id)arg1 ;
-(long long)layoutStyle;
-(SKUIViewElementLayoutContext *)layoutContext;
-(CGSize)sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(double)horizontalContentInset;
-(id)attributedStringForButton:(id)arg1 ;
-(id)attributedStringForLabel:(id)arg1 ;
-(double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3 ;
-(double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2 ;
-(SKUICardViewElement *)cardViewElement;
@end

