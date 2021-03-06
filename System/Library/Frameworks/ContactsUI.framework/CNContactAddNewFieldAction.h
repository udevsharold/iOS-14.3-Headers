/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@protocol CNContactGroupPickerDelegate;
@class NSArray;

@interface CNContactAddNewFieldAction : CNContactAction {

	NSArray* _prohibitedPropertyKeys;
	id<CNContactGroupPickerDelegate> _groupPickerDelegate;

}

@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                         //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactGroupPickerDelegate> groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
-(NSArray *)prohibitedPropertyKeys;
-(void)performActionWithSender:(id)arg1 ;
-(id<CNContactGroupPickerDelegate>)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id<CNContactGroupPickerDelegate>)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
@end

