/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactQuickActionViewContainer.h>

@class UITraitCollection, NSDictionary, NSString;

@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer> {

	NSDictionary* _actionViewsByActionType;

}

@property (nonatomic,readonly) NSDictionary * actionViewsByActionType;              //@synthesize actionViewsByActionType=_actionViewsByActionType - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForActionType:(id)arg1 ;
-(id)initWithActionTypes:(id)arg1 ;
-(NSDictionary *)actionViewsByActionType;
@end
