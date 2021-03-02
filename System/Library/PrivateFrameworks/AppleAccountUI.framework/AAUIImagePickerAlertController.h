/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class NSString;

@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate> {

	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) id selectionHandler;                     //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithSelectionHandler:(/*^block*/id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(long long)modalPresentationStyle;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)viewDidLoad;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentImagePickerAnimated:(BOOL)arg1 ;
-(void)_presentDocumentPickerAnimated:(BOOL)arg1 ;
-(void)_presentImageSourcePickerAnimated:(BOOL)arg1 ;
-(void)_presentImagePickerWithSourceType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_callSelectionHandlerWithImage:(id)arg1 cropRect:(id)arg2 ;
-(id)_propertiesForImagePickerController:(id)arg1 ;
@end
