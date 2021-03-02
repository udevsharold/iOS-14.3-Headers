/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@class LPMetadataProvider, NSURL, TVImageProxy, NSString;

@interface VUIShareActivityViewController : UIActivityViewController {

	LPMetadataProvider* _pendingMessageMetadataProvider;
	NSURL* _sharingURL;
	TVImageProxy* _imageProxy;
	NSURL* _itemImageURL;
	NSString* _itemTitle;
	NSString* _itemSubtitle;

}

@property (nonatomic,retain) NSURL * itemImageURL;                 //@synthesize itemImageURL=_itemImageURL - In the implementation block
@property (nonatomic,retain) NSString * itemTitle;                 //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,retain) NSString * itemSubtitle;              //@synthesize itemSubtitle=_itemSubtitle - In the implementation block
+(void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sourceView:(id)arg5 ;
+(void)shareMediaWithShareSheet:(id)arg1 ;
-(void)setItemTitle:(NSString *)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(NSString *)itemTitle;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setItemSubtitle:(NSString *)arg1 ;
-(void)setItemImageURL:(NSURL *)arg1 ;
-(NSString *)itemSubtitle;
-(NSURL *)itemImageURL;
@end
