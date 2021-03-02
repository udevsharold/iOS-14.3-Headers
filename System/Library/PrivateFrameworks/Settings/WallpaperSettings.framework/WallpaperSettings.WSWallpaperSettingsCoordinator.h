/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WSBaseCoordinator.h>

@class UINavigationController;

@interface WallpaperSettings.WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator> {

	 childCoordinators;
	 navigationController;

}

@property (readonly,nonatomic) UINavigationController * navigationController; 
-(BOOL)runTestWithTestName:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)initWithNavigationController:(id)arg1 ;
-(void)dealloc;
-(UINavigationController *)navigationController;
-(void)start;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
@end
