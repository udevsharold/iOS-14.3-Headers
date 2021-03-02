/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class NSDictionary;

@interface SMUMenuViewController : CCUIMenuModuleViewController {

	NSDictionary* _menuItemGlyphs;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,retain) NSDictionary * menuItemGlyphs;              //@synthesize menuItemGlyphs=_menuItemGlyphs - In the implementation block
@property (nonatomic,copy) id dismissHandler;                            //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)dismissHandler;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(NSDictionary *)menuItemGlyphs;
-(void)setMenuItemGlyphs:(NSDictionary *)arg1 ;
@end
