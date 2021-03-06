/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray, SKUIItemViewElement;

@interface SKUIMenuViewElement : SKUIViewElement {

	char _enabled;
	SKUILabelViewElement* _menuLabel;

}

@property (nonatomic,readonly) NSArray * menuItemTitles; 
@property (nonatomic,readonly) SKUILabelViewElement * menuLabel;              //@synthesize menuLabel=_menuLabel - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,readonly) SKUIItemViewElement * titleItem; 
-(long long)selectedItemIndex;
-(BOOL)isEnabled;
-(SKUIItemViewElement *)titleItem;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2 ;
-(NSArray *)menuItemTitles;
-(void)_enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
-(SKUILabelViewElement *)menuLabel;
@end

