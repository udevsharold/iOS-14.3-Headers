/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFSetWallpaperActionUserInterface.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>

@class NSDictionary, NSString;

@interface WFSetWallpaperActionUIKitUserInterface : WFActionUserInterface <WFSetWallpaperActionUserInterface, SBSUIWallpaperPreviewViewControllerDelegate> {

	NSDictionary* _images;
	NSDictionary* _options;
	long long _locations;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSDictionary * images;                 //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long locations;                   //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImages:(NSDictionary *)arg1 ;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSDictionary *)images;
-(long long)locations;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setLocations:(long long)arg1 ;
-(NSDictionary *)options;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showPreviewWithInput:(id)arg1 key:(id)arg2 wallpaperLocation:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

