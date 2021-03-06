/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivityItem : NSObject {

	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfo * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                  //@synthesize imageCache=_imageCache - In the implementation block
-(ICDocCamImageCache *)imageCache;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2 ;
@end

