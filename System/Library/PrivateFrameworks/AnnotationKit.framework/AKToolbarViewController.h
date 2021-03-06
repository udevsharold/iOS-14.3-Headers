/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (readonly) BOOL isPresentingPopover; 
+(id)imageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)titleForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1 ;
-(AKController *)controller;
-(void)teardown;
-(id)initWithController:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(void)revalidateItems;
-(BOOL)isPresentingPopover;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
@end

