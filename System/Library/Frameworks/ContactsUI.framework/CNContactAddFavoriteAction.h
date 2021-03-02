/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNUIFavoritesEntryPickerDelegate.h>

@class CNUIFavoritesEntryPicker, CNFavorites, NSString;

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate> {

	CNUIFavoritesEntryPicker* _favoritesEntryPicker;
	CNFavorites* _favorites;

}

@property (nonatomic,retain) CNUIFavoritesEntryPicker * favoritesEntryPicker;              //@synthesize favoritesEntryPicker=_favoritesEntryPicker - In the implementation block
@property (nonatomic,readonly) CNFavorites * favorites;                                    //@synthesize favorites=_favorites - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(CNFavorites *)favorites;
-(void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2 ;
-(void)_saveFavorite:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3 ;
-(CNUIFavoritesEntryPicker *)favoritesEntryPicker;
-(void)setFavoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1 ;
@end
