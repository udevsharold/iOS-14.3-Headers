/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@interface DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController <QLPreviewControllerDataSource> {

	 item;
	 qlItem;

}

@property (readonly,nonatomic) unsigned long long presentationMode; 
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(unsigned long long)presentationMode;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPreviewItems:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

