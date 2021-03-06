/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction {

	BOOL _ignoreMainAction;
	NSOrderedSet* _actions;
	CNQuickAction* _mainAction;

}

@property (nonatomic,retain) NSOrderedSet * actions;                         //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) CNQuickAction * mainAction;              //@synthesize mainAction=_mainAction - In the implementation block
@property (assign,nonatomic) BOOL ignoreMainAction;                          //@synthesize ignoreMainAction=_ignoreMainAction - In the implementation block
-(NSOrderedSet *)actions;
-(id)initWithActions:(id)arg1 ;
-(id)description;
-(CNQuickAction *)mainAction;
-(BOOL)isEqual:(id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMainAction:(CNQuickAction *)arg1 ;
-(BOOL)ignoreMainAction;
-(void)setIgnoreMainAction:(BOOL)arg1 ;
-(void)setActions:(NSOrderedSet *)arg1 ;
@end

