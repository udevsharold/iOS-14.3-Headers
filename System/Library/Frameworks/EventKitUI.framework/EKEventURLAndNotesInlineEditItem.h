/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class EKEventURLInlineEditItem, EKEventNotesInlineEditItem, NSString;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {

	EKEventURLInlineEditItem* _urlEditItem;
	EKEventNotesInlineEditItem* _notesEditItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)_contentSizeCategoryChanged;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(BOOL)isInline;
-(void)setDelegate:(id)arg1 ;
-(void)tableViewDidScroll;
-(void)setSelectedResponder:(id)arg1 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)isSaveable;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
@end

