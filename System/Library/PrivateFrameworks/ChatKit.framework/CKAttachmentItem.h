/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NSDate;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {

	CGSize _size;
	NSURL* _appendedBundleURL;
	BOOL _isSticker;
	BOOL _showDocumentIcon;
	BOOL _isIrisAsset;
	NSURL* _fileURL;
	NSString* _transferGUID;
	NSString* _guid;
	NSDate* _createdDate;
	NSString* _irisVideoPath;
	NSURL* _previewURL;

}

@property (nonatomic,copy) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * transferGUID;                      //@synthesize transferGUID=_transferGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                       //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,retain) NSString * irisVideoPath;                   //@synthesize irisVideoPath=_irisVideoPath - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                           //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (nonatomic,retain) NSURL * previewURL;                         //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (assign,nonatomic) BOOL isSticker;                             //@synthesize isSticker=_isSticker - In the implementation block
@property (assign,nonatomic) BOOL showDocumentIcon;                      //@synthesize showDocumentIcon=_showDocumentIcon - In the implementation block
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)pxWidth;
+(id)previewSizingQueue;
+(id)UTITypes;
+(CGSize)defaultSize;
+(id)previewCache;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)setIsSticker:(BOOL)arg1 ;
-(id)dragItem;
-(id)imageData;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5 ;
-(id)getIrisVideoPath;
-(id)UTIType;
-(id)previewURL:(BOOL)arg1 ;
-(NSURL *)fileURL;
-(CGSize)size;
-(BOOL)isSticker;
-(void)setTransferGUID:(NSString *)arg1 ;
-(BOOL)showDocumentIcon;
-(id)uncachedPreviewURL;
-(id)cachedPreview;
-(void)setShowDocumentIcon:(BOOL)arg1 ;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(id)_getIrisBundleLocation;
-(id)_getIrisBundleURL;
-(NSString *)irisVideoPath;
-(void)setIrisVideoPath:(NSString *)arg1 ;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(NSString *)description;
-(BOOL)isIrisAsset;
-(id)fileIcon;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canShareItem;
-(id)calculateIrisVideoPath;
-(void)startDeferredSetup;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(id)pasteboardItem;
-(NSString *)transferGUID;
-(NSURL *)previewURL;
-(void)_savePreview:(id)arg1 ;
-(NSURL *)previewItemURL;
-(NSString *)guid;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(NSDate *)createdDate;
@end
