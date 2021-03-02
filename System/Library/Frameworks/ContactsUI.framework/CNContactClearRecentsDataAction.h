/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@class CNContactRecentsReference, CNUICoreRecentsManager;

@interface CNContactClearRecentsDataAction : CNContactAction {

	CNContactRecentsReference* _recentsData;
	CNUICoreRecentsManager* _coreRecentsManager;

}

@property (nonatomic,readonly) CNContactRecentsReference * recentsData;                  //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * coreRecentsManager;              //@synthesize coreRecentsManager=_coreRecentsManager - In the implementation block
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(CNUICoreRecentsManager *)coreRecentsManager;
-(id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2 ;
-(BOOL)isDestructive;
-(id)title;
-(CNContactRecentsReference *)recentsData;
@end
