/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLSelectElement;

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLSelectElement* _selectionNode;
	id<UIWebFormControl> _selectControl;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) id<UIWebFormControl> _selectControl;                //@synthesize selectControl=_selectControl - In the implementation block
+(id)createPeripheralWithDOMHTMLSelectElement:(id)arg1 ;
-(void)beginEditing;
-(void)dealloc;
-(id)assistantView;
-(DOMHTMLSelectElement *)_selectionNode;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_selectControl:(id<UIWebFormControl>)arg1 ;
-(id<UIWebFormControl>)_selectControl;
-(id)initWithDOMHTMLSelectElement:(id)arg1 ;
-(void)endEditing;
@end

