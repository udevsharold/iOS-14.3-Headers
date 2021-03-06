/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(DOMHTMLOptionElement *)_node;
-(id)node;
-(BOOL)isGroup;
-(void)dealloc;
-(void)unselect;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(BOOL)selected;
-(id)initWithHTMLOptionNode:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end

