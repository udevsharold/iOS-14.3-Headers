/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactQuickActionPresentation.h>

@class NSString, NSMutableArray;

@interface CNTestQuickActionView : UIView <CNContactQuickActionPresentation> {

	BOOL _enabled;
	NSString* _title;
	NSMutableArray* _titlesAssigned;
	NSMutableArray* _statesAssigned;

}

@property (nonatomic,readonly) NSMutableArray * titlesAssigned;              //@synthesize titlesAssigned=_titlesAssigned - In the implementation block
@property (nonatomic,readonly) NSMutableArray * statesAssigned;              //@synthesize statesAssigned=_statesAssigned - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)enabled;
-(NSMutableArray *)titlesAssigned;
-(NSMutableArray *)statesAssigned;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
@end
