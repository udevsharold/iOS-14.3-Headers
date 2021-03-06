/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@class NSArray, CNPropertyGroupItem;

@interface CNPropertyAction : CNContactAction {

	NSArray* _propertyItems;

}

@property (assign,nonatomic,__weak) id<CNPropertyActionDelegate> delegate; 
@property (nonatomic,copy) NSArray * propertyItems;                                     //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
+(void)performDefaultActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(NSArray *)propertyItems;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(id)initWithContact:(id)arg1 propertyItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

