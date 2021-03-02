/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class UIViewController, UIMenu;

@interface _UIFulfilledContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	UIViewController* _previewViewController;
	UIMenu* _menu;

}

@property (nonatomic,copy) id<NSCopying> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,copy) UIMenu * menu;                                           //@synthesize menu=_menu - In the implementation block
-(UIMenu *)menu;
-(void)setMenu:(UIMenu *)arg1 ;
-(BOOL)isPresentable;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)identifier;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
@end
