/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {

	WebBookmarkCollection* _bookmarkCollection;
	_SFFolderPickerTableViewCellLayoutManager* _cellLayoutManager;

}
-(id)specifiers;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)willBecomeActive;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(void)_showBookmarksBeingSyncedAlert;
@end

