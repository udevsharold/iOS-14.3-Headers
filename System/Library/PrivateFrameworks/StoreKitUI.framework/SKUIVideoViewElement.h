/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIVideoViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	long long _playbackStyle;
	SKUIImageViewElement* _thumbnailImage;
	long long _kind;

}

@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long kind;                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long playbackStyle;                            //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(long long)itemIdentifier;
-(BOOL)isEnabled;
-(NSArray *)assets;
-(SKUIImageViewElement *)thumbnailImage;
-(long long)playbackStyle;
-(long long)kind;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

