/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface WFActionDescriptionItem : NSObject {

	NSString* _itemTitle;
	NSAttributedString* _itemDescription;

}

@property (nonatomic,readonly) NSString * itemTitle;                              //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,readonly) NSAttributedString * itemDescription;              //@synthesize itemDescription=_itemDescription - In the implementation block
+(id)itemWithTitle:(id)arg1 description:(id)arg2 ;
+(id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2 ;
-(NSString *)itemTitle;
-(NSAttributedString *)itemDescription;
-(id)initWithTitle:(id)arg1 description:(id)arg2 ;
@end

