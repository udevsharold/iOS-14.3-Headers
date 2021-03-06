/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKPaletteTextOptionsViewControllerDelegate;
@interface PKPaletteTextOptionsViewController : UIViewController {

	id<PKPaletteTextOptionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPaletteTextOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CGSize)preferredContentSize;
-(void)setDelegate:(id<PKPaletteTextOptionsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id<PKPaletteTextOptionsViewControllerDelegate>)delegate;
-(void)_textButtonTouchUpInsideHandler:(id)arg1 ;
-(void)_signatureButtonTouchUpInsideHandler:(id)arg1 ;
@end

