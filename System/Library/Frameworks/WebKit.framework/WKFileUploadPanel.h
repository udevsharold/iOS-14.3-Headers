/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol WKFileUploadPanelDelegate;
@class NSString;

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate> {

	WeakObjCPtr<WKContentView> _view;
	RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::DumbPtrTraits<WebKit::WebOpenPanelResultListenerProxy> >* _listener;
	RetainPtr<NSArray>* _mimeTypes;
	CGPoint _interactionPoint;
	BOOL _allowMultipleFiles;
	BOOL _usingCamera;
	RetainPtr<UIImagePickerController>* _imagePicker;
	RetainPtr<UIViewController>* _presentationViewController;
	RetainPtr<UIPopoverController>* _presentationPopover;
	BOOL _isPresentingSubMenu;
	RetainPtr<UIContextMenuInteraction>* _documentContextMenuInteraction;
	RetainPtr<UIDocumentPickerViewController>* _documentPickerController;
	int _mediaCaptureType;
	id<WKFileUploadPanelDelegate> _delegate;

}

@property (assign,nonatomic) id<WKFileUploadPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(id)initWithView:(id)arg1 ;
-(void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(BOOL)platformSupportsPickerViewController;
-(void)showFilePickerMenu;
-(void)showDocumentPickerMenu;
-(void)_configureImagePicker:(id)arg1 ;
-(void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(void)presentWithParameters:(OpenPanelParameters*)arg1 resultListener:(WebOpenPanelResultListenerProxy*)arg2 ;
-(id)_browseFilesButtonLabel;
-(id)_photoLibraryButtonLabel;
-(id)_cameraButtonLabelAllowingPhoto:(BOOL)arg1 allowingVideo:(BOOL)arg2 ;
-(void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)dealloc;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)_dispatchDidDismiss;
-(void)_dismissDisplayAnimated:(BOOL)arg1 ;
-(id)_mediaTypesForPickerSourceType:(long long)arg1 ;
-(void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(BOOL)_shouldMediaCaptureOpenMediaDevice;
-(void)_adjustMediaCaptureType;
-(void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)ensureContextMenuInteraction;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(void)_processMediaInfoDictionaries:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)dismiss;
-(void)setDelegate:(id<WKFileUploadPanelDelegate>)arg1 ;
-(void)_cancel;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)removeContextMenuInteraction;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)currentAvailableActionTitles;
-(id<WKFileUploadPanelDelegate>)delegate;
@end

