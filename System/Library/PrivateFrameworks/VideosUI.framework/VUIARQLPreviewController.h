/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class ARQuickLookWebKitItem, ARQuickLookPreviewItem;

@interface VUIARQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	ARQuickLookWebKitItem* _quickLookWebKitItem;
	ARQuickLookPreviewItem* _quickLookPreviewItem;

}

@property (nonatomic,retain) ARQuickLookWebKitItem * quickLookWebKitItem;                //@synthesize quickLookWebKitItem=_quickLookWebKitItem - In the implementation block
@property (nonatomic,retain) ARQuickLookPreviewItem * quickLookPreviewItem;              //@synthesize quickLookPreviewItem=_quickLookPreviewItem - In the implementation block
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)initWithQuickLookPreviewItem:(id)arg1 ;
-(id)initWithQuickLookWebKitItem:(id)arg1 ;
-(void)setQuickLookPreviewItem:(ARQuickLookPreviewItem *)arg1 ;
-(void)setQuickLookWebKitItem:(ARQuickLookWebKitItem *)arg1 ;
-(ARQuickLookWebKitItem *)quickLookWebKitItem;
-(ARQuickLookPreviewItem *)quickLookPreviewItem;
@end

