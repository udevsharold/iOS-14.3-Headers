/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray, SKUIImageViewElement;

@interface SKUIDialogTemplateViewElement : SKUIViewElement {

	long long _dialogType;

}

@property (nonatomic,readonly) long long dialogType;                        //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) SKUIImageViewElement * image; 
-(SKUILabelViewElement *)message;
-(long long)dialogType;
-(SKUIImageViewElement *)image;
-(NSArray *)buttons;
-(SKUILabelViewElement *)title;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

