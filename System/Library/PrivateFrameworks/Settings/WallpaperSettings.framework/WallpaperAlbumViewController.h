/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class WallpaperAlbumViewControllerSpec, UIViewController, PSRootController, PSSpecifier, PUPhotosGridDownloadHelper, NSString;

@interface WallpaperAlbumViewController : PUPhotosAlbumViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSController> {

	WallpaperAlbumViewControllerSpec* _wallpaperAlbumSpec;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	PUPhotosGridDownloadHelper* _downloadHelper;

}

@property (nonatomic,retain) WallpaperAlbumViewControllerSpec * wallpaperAlbumSpec;              //@synthesize wallpaperAlbumSpec=_wallpaperAlbumSpec - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;                   //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                  //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                            //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,readonly) PUPhotosGridDownloadHelper * downloadHelper;                      //@synthesize downloadHelper=_downloadHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willResignActive;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)popupViewWillDisappear;
-(void)formSheetViewWillDisappear;
-(PSSpecifier *)specifier;
-(BOOL)shouldShowMenu;
-(void)didLock;
-(void)didWake;
-(void)dealloc;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(PSRootController *)rootController;
-(BOOL)canDragIn;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canDragOut;
-(void)didUnlock;
-(PUPhotosGridDownloadHelper *)downloadHelper;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isPreheatingEnabled;
-(void)suspend;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)willUnlock;
-(void)updateLayoutMetrics;
-(void)willBecomeActive;
-(id)newGridLayout;
-(BOOL)allowSlideshowButton;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(id)initWithSpec:(id)arg1 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)setRootController:(PSRootController *)arg1 ;
-(WallpaperAlbumViewControllerSpec *)wallpaperAlbumSpec;
-(void)_showWallpaperImageViewControllerForPhoto:(id)arg1 ;
-(BOOL)allowsPeeking;
-(void)setWallpaperAlbumSpec:(WallpaperAlbumViewControllerSpec *)arg1 ;
@end

