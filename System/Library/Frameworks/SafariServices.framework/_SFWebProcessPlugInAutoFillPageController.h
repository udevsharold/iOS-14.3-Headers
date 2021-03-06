/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFWebProcessPlugInPageController.h>
#import <libobjc.A.dylib/SFFormAutoFiller.h>
#import <libobjc.A.dylib/SFInjectedJavaScriptWebProcessController.h>

@class _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, _SFFormMetadataController, NSString;

@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController> {

	_WKRemoteObjectInterface* _activityControllerInterface;
	_WKRemoteObjectInterface* _autoFillerInterface;
	WKWebProcessPlugInScriptWorld* _isolatedWorld;
	_SFFormMetadataController* _formMetadataController;

}

@property (nonatomic,retain) _SFFormMetadataController * formMetadataController;              //@synthesize formMetadataController=_formMetadataController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)setFormMetadataController:(_SFFormMetadataController *)arg1 ;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 ;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3 ;
-(void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 ;
-(void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6 ;
-(void)collectURLsForPrefillingAtURL:(id)arg1 ;
-(void)collectFormMetadataForPrefillingAtURL:(id)arg1 ;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearAutoFillMetadata;
-(void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 ;
-(_SFFormMetadataController *)formMetadataController;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 ;
@end

